#include‎<linux/linkage.h>
asmlinkage long sys_counter(int oldnum, int bump)
{ 
 
 return oldnum +bump;
}
