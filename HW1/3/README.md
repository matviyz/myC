# HW1-3
### Matviy Zhachek
##### Input
`scanf` scans for 5 inputs and places them in array `in[]`.
##### Mean
After being converted into floats in array `fin[]`, the inputs are summed and divided by 5 in order to find the mean.
##### Mode
Using an overly complicated set of `if` statements inside of a `for` loop, `in[]` values are checked for twins.
If two `[in]` values match, then `mode[i]` increments.
Finally `mode[i]` is checked for any values > 0 and the corresponding input is set as `finalMode`.
##### Median
Finally a `for` loop copies the `in[]` array into `out[]` for sorting.
`out[]` is then sorted in ascending order.
##### Output
If there is a mode among the inputs, then an output is printed including the mean, mode, and median.
Otherwise, only the mean and median is printed.
In both cases the median is the 3rd value of the sorted array (`out[2]`).
