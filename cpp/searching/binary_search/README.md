# Binary search

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

Binary search implementation which is an algorithm for finding an
item from an ordered list. <br />
This algorithm is more efficient (in average case) than a simple
linear search.

# Pseudocode :<a id="sec-2" name="sec-2"></a>

1 - Assign the minimum index (min) and the maximum (max) <br />
2 - Compute the middle of the array <br />
3 - Compare if the value is less, equal or higher than the desired
value <br />
4 - Reassign the max as the middle if the value is less than the
desired value OR the min as the middle if the value is higher than
the desired value. <br />
5 - Repeat the procedures until you find the value

# Analysis :<a id="sec-3" name="sec-3"></a>

The idea of the binary search is that when it makes an incorrect
guess an half of the array is discarded. <br />
Average case : O(log n)

# TODO :<a id="sec-4" name="sec-4"></a>

-   More flexibility (Templates) <br />
-   Comparative function <br />