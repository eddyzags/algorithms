# Quicksort

<div id="table-of-contents">
<h2>Table of Contents</h2>
<div id="text-table-of-contents">
<ul>
<li><a href="#sec-1">1. Description</a></li>
<li><a href="#sec-2">2. Pseudocode :</a></li>
<li><a href="#sec-3">3. <span class="todo TODO">TODO</span> :</a></li>
</ul>
</div>
</div>

# Description<a id="sec-1" name="sec-1"></a>

Quicksort implementation which is a sorting algorithm. The algorithm
choose one element in the array (we always choose the rightmost
element) and rearrange the array : <br />
Every element that are less than or equal to the pivot are placed to
the left of the pivot and the rest to its right. We call this step
the partitioning. <br />
As soon as the partitioning is done, we do the same procedures in
the subarrays (pivot excluded).

# Pseudocode :<a id="sec-2" name="sec-2"></a>

1 - Choose the pivot (rightmost element) <br />
2 - Compare each element in the array and swap the elements that are
less than or equal to the pivot to its left and the rest to its
right. <br />
3 - Repeat recursively the step 1 and 2 as long as possible. <br />
4 - Once it is no longer possible, the array is sorted.

# TODO :<a id="sec-3" name="sec-3"></a>

-   More flexibility (Templates)