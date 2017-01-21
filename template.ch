$define template[$TITLE,$CONTENT]
<!DOCTYPE html>
<html>
  <head>
    <meta charset="utf-8">
    <meta name="viewport" content="width=device-width, initial-scale=1">
    <title>$TITLE</title>
    <link rel="stylesheet" href="style.css">
  </head>
  <body>
    <div class="header">
      <h1>Linux x86 Assembly</h1>
      <a href="index.html">Home</a>
      <div class="asmblrsDropdown">
        <a href="assemblers.html" id="asmblrsBtn">Assemblers</a>
        <div class="asmblrsMenu">
          <p><a href="assemblers.html#intel">Intel</a></p>
          <p><a href="assemblers.html#gas">AT&T/GAS</a></p>
        </div>
      </div>
      <a href="dialects.html">Dialects</a>
      <!--<a href="instructions.html">Instructions</a>-->

      <div class="syscallsDropdown">
        <a href="syscall.html" id="syscallsBtn">Syscalls</a>
        <div class="syscallsMenu">
          <p><a href="syscall.html#PostP2">Post-Pentium II</a></p>
          <p><a href="syscall.html#PreP2">Pre-Pentium II</a></p>
          <p><a href="syscall.html#ref">Reference Table</a></p>
        </div>
      </div>

      <div class="registersDropdown">
        <a href="registers.html" id="registersBtn">Registers</a>
        <div class="registersMenu">
          <p><a href="registers.html#x86">All x86 CPUs</a></p>
          <p><a href="registers.html#fpu">MMX & FPU</a></p>
          <p><a href="registers.html#sse">SSE & AVX</a></p>
        </div>
      </div>

    </div>

    <div>
$CONTENT
    </div>

<a rel="license" href="http://creativecommons.org/licenses/by-sa/4.0/"><img alt="Creative Commons License" style="border-width:0" src="https://i.creativecommons.org/l/by-sa/4.0/88x31.png" /></a><br />This work is licensed under a <a rel="license" href="http://creativecommons.org/licenses/by-sa/4.0/">Creative Commons Attribution-ShareAlike 4.0 International License</a>.
  </body>
</html>
|
