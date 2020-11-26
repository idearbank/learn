<?php

//$str = 'tinyint(1)';
//echo strtok($str, "(),");
//echo strtok("(),");        //1

$str = 'abcdefghijk';
echo strtok($str, "dh");
echo PHP_EOL;
echo strtok("dh");
echo PHP_EOL;
echo strtok("dh");
echo PHP_EOL;
exit;

