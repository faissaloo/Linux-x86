$include[template.ch]
$template[Dialects,
  <h2>Dialects</h2>
  <p>x86 Assembly has two main 'dialects'&#44; they both do exactly the same stuff&#44; just in different ways&#44; so just pick the one that looks nicest to you.</p>
  <p>Both these example programs set the register eax to 3</p>
  <ul>
    <li>Intel
      <p>mov eax&#44; 3</p>
    </li>
    <li>AT&T/GAS
      <p>movl $3&#44; %eax</p>
    </li>
  </ul>]
