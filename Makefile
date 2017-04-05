#TODO:
#Add a minfier for HTML, JS and CSS
MC:=clarac.py
all: assemblers.html dialects.html index.html instructions.html registers.html syscall.html registers.html args.html

assemblers.html: style.css assemblers.cp template.ch
	$(MC) assemblers.cp -o assemblers.html

dialects.html: style.css dialects.cp template.ch
	$(MC) dialects.cp -o dialects.html

index.html: style.css index.cp template.ch
	$(MC) index.cp -o index.html

instructions.html: style.css instructions.cp template.ch
	$(MC) instructions.cp -o instructions.html

registers.html: style.css registers.cp template.ch
	$(MC) registers.cp -o registers.html

args.html: style.css args.cp template.ch
	$(MC) args.cp -o args.html

syscall.html: style.css js/jquery.dataTables.js  js/jquery.js  js/syscalls-x86.js  js/syscallTable.js
	$(MC) syscall.cp -o syscall.html

clean:
	$(RM) *.html
