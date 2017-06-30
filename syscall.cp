$include[template.ch]
$template[Syscalls,
    <!--Generated with https://github.com/paolostivanin/syscall-table-32bit-->
    <script type="text/javascript" language="javascript" src="js/jquery.js"></script>
    <script type="text/javascript" language="javascript" src="js/jquery.dataTables.js"></script>
    <script type="text/javascript" language="javascript" src="js/syscallTable.js" charset="utf-8"></script>

      <h2>System Calls</h2>
      <p>System calls (or 'syscalls' for short) are used to call services from the running operating system&#44; such as reading and writing to files.</p>
      <p>All system calls follow a calling convention&#44; there are 2 calling conventions used on Linux for the x86 platform.</p>
      <h3><a name="PostP2" href="#PostP2">Post-Pentium II</a></h3>
      <div class="code">
        <p>mov eax&#44; &lt;THE SYSCALL YOU WANT&gt;</p>
        <p>mov ebx&#44; &lt;ARGUMENT1&gt;</p>
        <p>mov ecx&#44; &lt;ARGUMENT2&gt;</p>
        <p>mov edx&#44; &lt;ARGUMENT3&gt;</p>
        <p>push &lt;THE LABEL YOU WANT TO JUMP TO AFTER SYSENTER&gt;</p>
        <p>push ecx</p>
        <p>push edx</p>
        <p>push ebp</p>
        <p>mov ebp&#44; esp</p>
        <p>sysenter</p>
        &lt;THE LABEL TO JUMP TO AFTER SYSENTER&gt;:
      </div>
      However&#44; if you don't care about what gets put back into your registers (such as when you would immediately overwrite them) you can cut a few corners and end up with this significantly smaller and faster piece of code:
      <div class="code">
        <p>mov eax&#44; &lt;THE SYSCALL YOU WANT&gt;</p>
        <p>mov ebx&#44; &lt;ARGUMENT1&gt;</p>
        <p>mov ecx&#44; &lt;ARGUMENT2&gt;</p>
        <p>mov edx&#44; &lt;ARGUMENT3&gt;</p>
        <p>push &lt;THE LABEL YOU WANT TO JUMP TO AFTER SYSENTER&gt;</p>
        <p>lea ebp&#44; &#91;esp-12&#93;</p>
        <p>sysenter</p>
        &lt;THE LABEL TO JUMP TO AFTER SYSENTER&gt;:
      </div>
      <h3><a name="PreP2" href="#PreP2">Pre-Pentium II</a></h3>
        <p>
          CPUs before the Pentium II do not have the sysenter instruction. Rather they must use the old&#44; slow and deprecated interrupt based calling convention.
        </p>

        <div class="code">
          <p>mov eax&#44; &lt;THE SYSCALL YOU WANT&gt;</p>
          <p>mov ebx&#44; &lt;ARGUMENT1&gt;</p>
          <p>mov ecx&#44; &lt;ARGUMENT2&gt;</p>
          <p>mov edx&#44; &lt;ARGUMENT3&gt;</p>
          <p>int 0x80</p>
        </div>
      
      <h3><a name="ref" href="#ref">Linux 4.9.3 Syscall Reference Table </a></h3>
      <table cellpadding="0" cellspacing="0" border="0" class="display" id="syscall_table">
        <thead>
          <tr>
            <th rowspan="2">#</th>
            <th rowspan="2">Name</th>
            <th rowspan="2">Signature</th>
            <th class="ui-state-default" colspan="6">Registers</th>
            <th rowspan="2">Definition</th>
            <th rowspan="2">URL</th>
          </tr>
          <tr>
            <th>eax</th>
            <th>ebx</th>
            <th>ecx</th>
            <th>edx</th>
            <th>esi</th>
            <th>edi</th>
          </tr>
        </thead>
        <tbody>

        </tbody>
      </table>
]
