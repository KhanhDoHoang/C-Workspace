<!-- <?php
class pro{
    var $name;
    var $ex;
    var $lang;
    var $edu;

    function Pro($name, $ex, $lang, $edu){
        $this->name = name;
        $this->ex = ex;
        $this->lang =lang;
        $this->edu = edu;
    }   

    function get_name(){
        return $this->name;
    }

    function set_name($newname){
        $this->name = $newname;
    }
    function get_ex(){
        return $this->ex;
    }

    function set_ex($newex){
        $this->ex = $newex;
    }
    function get_lang(){
        return $this->lang;
    }

    function set_lang($newlang){
        $this->lang = $newlang;
    }
    function get_edu(){
        return $this->edu;
    }

    function set_edu($newedu){
        $this->edu = $newedu;
    }
    function ouput(){
        echo "Pro name:".$this->name."<br>";
        echo $this->name." holds rhe degree: ".$this->edu."<br><br>";

    }
}

$paul =new Pro('Paul cond', 12,'c++','bar');
$paul->ouput();
$paul->set_ex(22);
$paul->ouput();

?> -->

<?php
function abc($m, $x, $z){
    return $m*$x+$z;
}
$a = 1.5;
$b = 2;
$c= 3;
echo abc($a,$b,$c);
echo "<br>";

$foo = (5*5)%5;
echo "$foo";
/*f*/
?>
