# MetaCluster
# Language: C++
# Input: FNA
# Output: prefix
# Tested with: PluMA 1.0, GCC 4.8.4
# Dependency: MetaCluster 3.0

PluMA plugin to run MetaCluster (Yang et al, 2010), a tool
that performs binning of short reads.

The reads should be specified in an input FNA file.
We include the file from the test dataset for MetaCluster,
available here: https://i.cs.hku.hk/~alse/MetaCluster/download.html

Each bin will be output into a separate FNA file, prefixed
with the input file name.

The plugin relies on the metaCluster-3.0 application being
in the system PATH.
