$include[template.ch]
$template[Registers,
      <h2>Registers</h2>
      <p>Registers are temporary data stores for the CPU that are extremely fast to access&#44; they often have data placed in them automatically by instructions or as the result of a fuction call.</p>
      <p>
        Most registers are divided up and can be addressed as such. For example&#44; setting the ax register to 25565 would make the register al 221.
      </p>
      <h3><a name="x86" href="#x86">All x86 CPUs</a></h3>
      <table class="register">
        <caption>Accumulator</caption>
        <tr>
          <td colspan="4">eax (32-bits)</td>
        </tr>
        <tr>
          <td class="filled" colspan="2"></td>
          <td colspan="2">ax (16-bits)<br></td>
        </tr>
        <tr>
          <td class="filled" colspan="2"></td>
          <td>ah (8-bits)</td>
          <td>al (8-bits)</td>
        </tr>
      </table>
      
      <table class="register">
        <caption>Base</caption>
        <tr>
          <td colspan="4">ebx (32-bits)</td>
        </tr>
        <tr>
          <td class="filled" colspan="2"></td>
          <td colspan="2">bx (16-bits)<br></td>
        </tr>
        <tr>
          <td class="filled" colspan="2"></td>
          <td>bh (8-bits)</td>
          <td>bl (8-bits)</td>
        </tr>
      </table>
      
      <table class="register">
        <caption>Counter</caption>
        <tr>
          <td colspan="4">ecx (32-bits)</td>
        </tr>
        <tr>
          <td class="filled" colspan="2"></td>
          <td colspan="2">cx (16-bits)<br></td>
        </tr>
        <tr>
          <td class="filled" colspan="2"></td>
          <td>ch (8-bits)</td>
          <td>cl (8-bits)</td>
        </tr>
      </table>
      <table class="register">
        <caption>Data</caption>
        <tr>
          <td colspan="4">edx (32-bits)</td>
        </tr>
        <tr>
          <td class="filled" colspan="2"></td>
          <td colspan="2">dx (16-bits)<br></td>
        </tr>
        <tr>
          <td class="filled" colspan="2"></td>
          <td>dh (8-bits)</td>
          <td>dl (8-bits)</td>
        </tr>
      </table>
      
      They also have the following specialised registers&#44; which are usually used for pointing to memory. However&#44; they can be used outside of the special instructions that handle them to either get some extra register space or perform some tricks.
      <table class="register">
        <caption>Source</caption>
        <tr>
          <td colspan="4">esi (32-bits)</td>
        </tr>
        <tr>
          <td class="filled" colspan="2"></td>
          <td colspan="2">si (16-bits)<br></td>
        </tr>
      </table>

      <table class="register">
        <caption>Destination</caption>
        <tr>
          <td colspan="4">edi (32-bits)</td>
        </tr>
        <tr>
          <td class="filled" colspan="2"></td>
          <td colspan="2">di (16-bits)<br></td>
        </tr>
      </table>
      
      <table class="register">
        <caption>Stack Pointer</caption>
        <tr>
          <td colspan="4">esp (32-bits)</td>
        </tr>
        <tr>
          <td class="filled" colspan="2"></td>
          <td colspan="2">sp (16-bits)<br></td>
        </tr>
      </table>
      
      <table class="register">
        <caption>Stack Base Pointer</caption>
        <tr>
          <td colspan="4">ebp (32-bits)</td>
        </tr>
        <tr>
          <td class="filled" colspan="2"></td>
          <td colspan="2">bp (16-bits)<br></td>
        </tr>
      </table>
      
      The instruction register can not be written to&#44; only read.
      <table class="register">
        <caption>Instruction</caption>
        <tr>
          <td colspan="4">eip (32-bits)</td>
        </tr>
        <tr>
          <td class="filled" colspan="2"></td>
          <td colspan="2">ip (16-bits)<br></td>
        </tr>
      </table>
      <h3><a name="fpu" href="#fpu">MMX & FPU</a></h3>
      <p>
        MMX registers are available on x86 CPUs supporting the MMX extension&#44; however these are effectively aliases for the FPU registers for use with MMX instructions. FPU registers are available on all CPUs supporting the FPU extension.
      </p>
      <table class="register">
        <tr>
          <td colspan="9">ST0 (80-bits)</td>
        </tr>
        <tr>
          <td class="filled" colspan="1"></td>
          <td colspan="8">MM0 (64-bits)<br></td>
        </tr>
      </table>
      
      <table class="register">
        <tr>
          <td colspan="9">ST1 (80-bits)</td>
        </tr>
        <tr>
          <td class="filled" colspan="1"></td>
          <td colspan="8">MM1 (64-bits)<br></td>
        </tr>
      </table>
      
      <table class="register">
        <tr>
          <td colspan="9">ST2 (80-bits)</td>
        </tr>
        <tr>
          <td class="filled" colspan="1"></td>
          <td colspan="8">MM2 (64-bits)<br></td>
        </tr>
      </table>
      
      <table class="register">
        <tr>
          <td colspan="9">ST3 (80-bits)</td>
        </tr>
        <tr>
          <td class="filled" colspan="1"></td>
          <td colspan="8">MM3 (64-bits)<br></td>
        </tr>
      </table>

      <table class="register">
        <tr>
          <td colspan="9">ST4 (80-bits)</td>
        </tr>
        <tr>
          <td class="filled" colspan="1"></td>
          <td colspan="8">MM4 (64-bits)<br></td>
        </tr>
      </table>
      
      <table class="register">
        <tr>
          <td colspan="9">ST5 (80-bits)</td>
        </tr>
        <tr>
          <td class="filled" colspan="1"></td>
          <td colspan="8">MM5 (64-bits)<br></td>
        </tr>
      </table>
      
      <table class="register">
        <tr>
          <td colspan="9">ST6 (80-bits)</td>
        </tr>
        <tr>
          <td class="filled" colspan="1"></td>
          <td colspan="8">MM6 (64-bits)<br></td>
        </tr>
      </table>
      
      <table class="register">
        <tr>
          <td colspan="9">ST7 (80-bits)</td>
        </tr>
        <tr>
          <td class="filled" colspan="1"></td>
          <td colspan="8">MM7 (64-bits)<br></td>
        </tr>
      </table>
      <h3><a name="sse" href="#sse">SSE & AVX</a></h3>
      <p>
        ZMM registers are available with the AVX-512 extension&#44; YMM registers are available with the AVX extension and XMM registers are available with the SSE extension.
      </p>
      <table class="register">
        <tr>
          <td colspan="16">ZMM0 (512-bits)<br></td>
        </tr>
        <tr>
          <td class="filled" colspan="8"></td>
          <td colspan="8">YMM0 (256-bits)<br></td>
        </tr>
        <tr>
          <td class="filled" colspan="12"></td>
          <td colspan="4">XMM0 (128-bits)<br></td>
        </tr>
      </table>

      <table class="register">
        <tr>
          <td colspan="16">ZMM1 (512-bits)<br></td>
        </tr>
        <tr>
          <td class="filled" colspan="8"></td>
          <td colspan="8">YMM1 (256-bits)<br></td>
        </tr>
        <tr>
          <td class="filled" colspan="12"></td>
          <td colspan="4">XMM1 (128-bits)<br></td>
        </tr>
      </table>

      <table class="register">
        <tr>
          <td colspan="16">ZMM2 (512-bits)<br></td>
        </tr>
        <tr>
          <td class="filled" colspan="8"></td>
          <td colspan="8">YMM2 (256-bits)<br></td>
        </tr>
        <tr>
          <td class="filled" colspan="12"></td>
          <td colspan="4">XMM2 (128-bits)<br></td>
        </tr>
      </table>

      <table class="register">
        <tr>
          <td colspan="16">ZMM3 (512-bits)<br></td>
        </tr>
        <tr>
          <td class="filled" colspan="8"></td>
          <td colspan="8">YMM3 (256-bits)<br></td>
        </tr>
        <tr>
          <td class="filled" colspan="12"></td>
          <td colspan="4">XMM3 (128-bits)<br></td>
        </tr>
      </table>

      <table class="register">
        <tr>
          <td colspan="16">ZMM4 (512-bits)<br></td>
        </tr>
        <tr>
          <td class="filled" colspan="8"></td>
          <td colspan="8">YMM4 (256-bits)<br></td>
        </tr>
        <tr>
          <td class="filled" colspan="12"></td>
          <td colspan="4">XMM4 (128-bits)<br></td>
        </tr>
      </table>

      <table class="register">
        <tr>
          <td colspan="16">ZMM5 (512-bits)<br></td>
        </tr>
        <tr>
          <td class="filled" colspan="8"></td>
          <td colspan="8">YMM5 (256-bits)<br></td>
        </tr>
        <tr>
          <td class="filled" colspan="12"></td>
          <td colspan="4">XMM5 (128-bits)<br></td>
        </tr>
      </table>

      <table class="register">
        <tr>
          <td colspan="16">ZMM6 (512-bits)<br></td>
        </tr>
        <tr>
          <td class="filled" colspan="8"></td>
          <td colspan="8">YMM6 (256-bits)<br></td>
        </tr>
        <tr>
          <td class="filled" colspan="12"></td>
          <td colspan="4">XMM6 (128-bits)<br></td>
        </tr>
      </table>

      <table class="register">
        <tr>
          <td colspan="16">ZMM7 (512-bits)<br></td>
        </tr>
        <tr>
          <td class="filled" colspan="8"></td>
          <td colspan="8">YMM7 (256-bits)<br></td>
        </tr>
        <tr>
          <td class="filled" colspan="12"></td>
          <td colspan="4">XMM7 (128-bits)<br></td>
        </tr>
      </table>]
