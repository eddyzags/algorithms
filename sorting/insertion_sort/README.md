# Insertion sort

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

Insertion sort implementation which is a sorting algorithm. The idea
is to loop through the array and compare each new position with
elements to its left. When the correct emplacement is found, we
insert the element and continue. <br />
Like the selection sort, the algorithm gives us two subarrays (sorted
and unsorted). When the sorted subarray reach the size of the array,
the entire array is sorted

# Pseudocode :<a id="sec-2" name="sec-2"></a>

1 - Insert the second index (The key) to its left until the key is
bigger than the value in the sorted subarray <br />
2 - Insert the third index (The new key) to its left until the key
is bigger than the value in the sorted subarray <br />
3 - Insert the fourth index (The new key) to its left until the key
is bigger than the value in the sorted subarray <br />
3 - ... <br />
4 - When the end of the array is reached, the entire array is sorted.

# Analysis :<a id="sec-3" name="sec-3"></a>

The insertion of a new element in the sorted subarray can take a
certain amount of time if the element is less than every values in
the sorted subarray. Which gives us an average case of O(n^2).
But if the array is already sorted, the algorithm take less time to
execute. <br />
Average case : O(n^2) <br />
Best case : O(n)

# TODO :<a id="sec-4" name="sec-4"></a>

-   More flexibility (Template)