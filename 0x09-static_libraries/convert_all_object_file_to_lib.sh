#script to compile all object files to libmy.a
#using 'ar' command
#ar is to create archive
#rc is to replace and copy files in that archive, with the newest
#{library name}.a - 'a' is extension for archive
# *.o is to take all object files and put them in the archive
ar rc  libmy.a *.o
