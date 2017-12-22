<?php
$z[0]=Array("field","",170,189);
$z[0][4]['name']="title";
$z[1]=Array("global","",190,216);
$z[1][4]['name']="cfg_webname";
$z[2]=Array("field","",265,294);
$z[2][4]['name']="keywords";
$z[3]=Array("field","",342,400);
$z[3][4]['name']="description";
$z[3][4]['function']="html2text(@me)";
$z[4]=Array("include","",678,713);
$z[4][4]['filename']="head.htm";
$z[5]=Array("channel","\r\n                <li><a href='[field:typeurl/]'>[field:typename/]</a></li>\r\n                ",1005,1138);
$z[5][4]['type']="son";
$z[6]=Array("global","",1357,1378);
$z[6][4]['name']="cfg_dz";
$z[7]=Array("global","",1412,1433);
$z[7][4]['name']="cfg_dh";
$z[8]=Array("global","",1467,1488);
$z[8][4]['name']="cfg_yx";
$z[9]=Array("field","",1660,1682);
$z[9][4]['name']="typename";
$z[10]=Array("field","",1753,1775);
$z[10][4]['name']="position";
$z[11]=Array("list","\r\n                <li><div class=\"nlist_l\"><img src=\"[field:litpic/]\" width=\"218\" height=\"138\"></div>\r\n                    	<div class=\"nlist_r\">\r\n                        	<div class=\"nlist_r1\"><a href=\"[field:arcurl/]\" target=\"_blank\" > [field:title/]</a></div>\r\n                        	<div class=\"nlist_r2\">[[field:pubdate function='strftime(\"%Y-%m-%d\",@me)'/]]</div>\r\n                        	<div class=\"nlist_r3\"><p>[field:description function='cn_substr(@me,200)'/]...</p>\r\n                            </div>\r\n                        </div>\r\n                        <div class=\"clear\"></div>\r\n                    </li>\r\n                  ",1955,2651);
$z[11][4]['pagesize']="5";
$z[11][4]['titlelen']="70";
$z[12]=Array("pagelist","",2808,2874);
$z[12][4]['listitem']="index,end,pre,next,pageno";
$z[12][4]['listsize']="7";
$z[13]=Array("include","",3021,3056);
$z[13][4]['filename']="foot.htm";

?>