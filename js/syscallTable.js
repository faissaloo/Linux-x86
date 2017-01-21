/*
The MIT License (MIT)

Copyright (c) 2014 Greg Ose

Permission is hereby granted, free of charge, to any person obtaining a copy of
this software and associated documentation files (the "Software"), to deal in
the Software without restriction, including without limitation the rights to
use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of
the Software, and to permit persons to whom the Software is furnished to do so,
subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS
FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR
COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
*/
      var renderReg = function (obj) {
        if(obj.aData[obj.iDataColumn].type != null)
          if(obj.aData[obj.iDataColumn].def != null && obj.aData[obj.iDataColumn].file != "")
            return "<a target='_blank' href='http://lxr.free-electrons.com/source/"+obj.aData[obj.iDataColumn].def.file+"#L"+obj.aData[obj.iDataColumn].def.line+"'>"+obj.aData[obj.iDataColumn].type+"</a>";
          else
            return obj.aData[obj.iDataColumn].type;
        else
          return "-";
      };
      $(document).ready(function() {
        $('#syscall_table').dataTable( {
          "sDom": '<"H"rlf>t<"F"ip>',
          "iDisplayLength": -1,
          "oLanguage": {
            "sLengthMenu": 'Show <select><option value="10">10</option><option value="25">25</option><option value="50">50</option><option value="100">100</option><option value="-1">All</option></select> entries'
          },
          "bJQueryUI": true,
          "bProcessing": true,
          "sPaginationType": "full_numbers",
          "sAjaxSource": './js/syscalls-x86.js',
          "aoColumns": [
            /* Number */ { "sClass": "center"},
            /* Name */ { "sClass": "bold", "sType": "html", "fnRender": function (obj) {
              if(obj.aData[1].match("sys_(.+)"))
                return "<a target='_blank' href='http://www.kernel.org/doc/man-pages/online/pages/man2/"+obj.aData[1].match("sys_(.+)")[1]+".2.html'>"+obj.aData[1]+"</a>";
              else
                return obj.aData[1]
                }
                       },
            /* Signature */ { "bVisible": false, "bSearchable": false },
            /* eax */ { iDataSort: 0, "bSearchable": true },
            /* ebx */ { "sType": "html", "fnRender": renderReg, "bSearchable": false },
            /* ecx */ { "sType": "html", "fnRender": renderReg, "bSearchable": false },
            /* edx */ { "sType": "html", "fnRender": renderReg, "bSearchable": false },
            /* esi */ { "sType": "html", "fnRender": renderReg, "bSearchable": false },
            /* edi */ { "sType": "html", "fnRender": renderReg, "bSearchable": false },
            /* URL */ { "sType": "html", "bSearchable": false, "fnRender": function (oObj) {
              if(oObj.aData[19] != "")
                return "<a target='_blank' href='http://lxr.free-electrons.com/source/"+oObj.aData[9]+"#L"+oObj.aData[10]+"'>"+oObj.aData[9]+":"+oObj.aData[10]+"</a>";
              else
                return oObj.aData[9];
            }
                      },
            /* Line */ { "bVisible": false, "bSearchable": false }
          ]
        } );
      } );
