
# Use Cron with Python



### 1. Make sure your script works by running the following in this directory.

```bash
python write-file.py
```
You should see a new file called `write-file-output.txt` with something like:

```
2021-03-16 16:32:55
2021-03-16 16:32:57
2021-03-16 16:32:58
```
Note the `#!/usr/bin/python` line at the top of the .py file that makes it possible to run on the CLI. Next we'll tell cron to run this file automatically. But first, some setup:



### 2. Run this on the CLI to tell crontab to use nano editor (much easier!)

```bash
alias crontab='EDITOR=nano /usr/bin/crontab'
```


### 3. From this directory, type `pwd` to see the full path to your directory. Copy it.



### 4. Now we'll tell cron to run this file every minute

```bash
crontab -e
```
and a new editor will open. Add the following, replacing the path with your own:

```bash
* * * * * cd /path/to/this/directory/ && python ./write-file.py
```
It should look something like

```bash
* * * * * cd /Users/owenmundy/Documents/_code/dig333-physical-computing/python/cron-examples/ && python ./write-file.py
```


### 5. Now open the `write-file-output.txt` file in Atom to see the new dates, once per minute:

```
2021-03-16 16:38:00
2021-03-16 16:39:00
2021-03-16 16:40:00
2021-03-16 16:41:00
```


## References

- [Scheduling Jobs With Crontab on macOS](https://betterprogramming.pub/https-medium-com-ratik96-scheduling-jobs-with-crontab-on-macos-add5a8b26c30)
- [Python File Write](https://www.w3schools.com/python/python_file_write.asp)
- [Python datetime to string without microsecond component](https://stackoverflow.com/questions/7999935/python-datetime-to-string-without-microsecond-component)
