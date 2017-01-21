#TODO:
#Add a minfier for HTML, JS and CSS
MC:=clarac.py
all: assemblers.html dialects.html index.html instructions.html registers.html syscall.html
	
assemblers.html:
	$(MC) assemblers.cp -o assemblers.html

dialects.html: style.css
	$(MC) dialects.cp -o dialects.html

index.html: style.css
	$(MC) index.cp -o index.html

instructions.html: style.css
	$(MC) instructions.cp -o instructions.html

registers.html: style.css
	$(MC) registers.cp -o registers.html

syscall.html: style.css js/jquery.dataTables.js  js/jquery.js  js/syscalls-x86.js  js/syscallTable.js
	$(MC) syscall.cp -o syscall.html

clean:
	$(RM) *.html
