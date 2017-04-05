$include[template.ch]
$template[Arguments,
	<h2>Arguments</h2>
	<p>In Linux when your program is started the stack will be filled with data pertaining to the arguments that have been passed to your program as well as the environment. The data will be organised as follows:</p>
	<table>
		<tr>
			<td>NULL</td>
			<td>5</td>
		</tr>
		<tr>
			<td>The environment variables (memory addresses pointing to a null terminated string)</td>
			<td>4</td>
		</tr>
		<tr>
			<td>NULL</td>
			<td>3</td>
		<tr>
		<tr>
			<td>The arguments (memory addresses pointing to a null terminated string)</td>
			<td>2</td>
		</tr>
		<tr>
			<td>The name of the executable (a memory address pointing to a null terminated string)</td>
			<td>1</td>
		</tr>
		<tr>
			<td>Number of arguments (32-bit integer)</td>
			<td>0</td>
		</tr>
	</table>
	<h3><a name="shrthnd" href="#shrthnd">Checking for shorthand arguments</a></h3>
	<p>You will often times want the user to be able to specify a shorthand argument (such as -l&#44;-p&#44; etc). As you must take into account checking for the null terminator this will mean that you will have to check for the 3 bytes&#44; this is an irregular quantity. Your first inclination may be to either mask it using a bitwise and or use a shift however there is a faster and smaller way&#44; taking 1 away from the address pointer&#44; grabbing that doubleword and simply checking that. For example a check for the argument '-l' would be:</p>
	<div class="code">
		<p>mov &lt;CHARACTER REGISTER&gt;&#44; &#91;&lt;POINTER REGISTER&gt;-1&#93;</p>
		<p>cmp &lt;CHARACTER REGISTER&gt;&#44;`\0-l\0` ;\0 is a NULL character</p>
	</div>
	<p>This tricks works because when arguments are passed to your program each argument is placed consecutively in memory&#44; the zero that is padding your string is actually the null terminator of the argument prior!</p>
	<h3><a name="arglen" href="#arglen">Getting the length of an argument</a></h3>
	<p>As mentioned prior&#44; arguments are placed consecutively in memory&#44; this also means that the difference between the addresses of two arguments will be their length (including the null terminator)&#44; so you can simply pop two arguments off the stack&#44; take the first address away from the second address and you now have the length of the first argument.</p>
	<p>Now&#44 you may be wondering what to do when dealing with the final argument as the above method requires an argument after it to be present. As you see from the diagram above&#44; after the arguments there is a null and then environment variables so all you need to do is skip the null and get the difference between the address of the last argument and the address of the first environment variable as they are placed consecutively in memory. This method is great because it can be done in O(1) time&#44; unlike attempting to get the string length by more conventional means which would be O(n).</p>
	
]
