<?php

function bubbleSort(&$Array1) 
{ 
    $n = sizeof($Array1); 
  
    for($i = 0; $i < $n; $i++)  
    { 
        for ($j = 0; $j < $n - $i - 1; $j++)  
        { 
            if ($Array1[$j] > $Array1[$j+1]) 
            { 
                $t = $Array1[$j]; 
                $Array1[$j] = $Array1[$j+1]; 
                $Array1[$j+1] = $t; 
            } 
        } 
    } 
} 
  
// Driver code to test above 
$Array1 = array(11,22,55,77,66,33,88,99); 
  
$len = sizeof($Array1); 
bubbleSort($Array1); 
  
echo "Sorted array : \n"; 
  
for ($i = 0; $i < $len; $i++) 
    echo $Array1[$i]." ";  
?> 