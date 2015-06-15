# Selection sort

<div id="table-of-contents">
<h2>Table of Contents</h2>
<div id="text-table-of-contents">
<ul>
<li><a href="#sec-1">1. Description :</a></li>
<li><a href="#sec-2">2. Pseudocode :</a></li>
<li><a href="#sec-3">3. Analysis :</a></li>
<li><a href="#sec-4">4. <span class="todo TODO">TODO</span> :</a></li>
</ul>
</div>
</div>

# Description :<a id="sec-1" name="sec-1"></a>

Selection sort implementation write in C++ which is an sorting
algorithm. 
The algorithm find the smallest value in the array and swap it at the
first position. Then, the next smallest value at the second
position... That gives us two subarrays (sorted subarray and the other
values). 
When the sorted subarray reach the end, the entire array is sorted.

# Pseudocode :<a id="sec-2" name="sec-2"></a>

1 - Find the smallest value and swap it a the first position <br />
2 - Find the second smallest value and swap it a the second position <br />
3 - Loop until the end of the array <br />

# Analysis :<a id="sec-3" name="sec-3"></a>

This algorithm use no space in memory which is an advantage in
limited memory system. But takes time to be executed with
large inputs. <br />
Average case : O(n^2) <br />
Worst case space complexity : O(1) <br />

# TODO :<a id="sec-4" name="sec-4"></a>

-   More flexibility (Template)