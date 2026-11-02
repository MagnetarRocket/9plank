# Plank (9plank)

Plank is a very simple editor for the plan9 family of systems, it only supports file reading, editing, saving, and nothing much else. It's interface is somewhat similar to xedit, but with three less buttons and no console log in the middle.

## Usage

'plank {example file}'

Plank consists of two major elements in it's interface:

```
#-----------------------#
|  Filename path entry  |
#-----------------------#
|                       |
|                       |
|       Text area       |
|                       |
|                       |
#-----------------------#
```

Unlike the standard graphical editors for the Plan9 family of systems, this is rather simple. Standard Plan9 shortcuts and quarks will still apply however.

Menus and options from them are also very simple, middle-clicking will bring up...
```
#----------#
|Copy      |
|Dump      |
|Cut       |
|Delete    |
|Select all|
#----------#
```
Note the fact that there is no "find". Right clicking is also very simple:
```
#--------------#
|Load from path|
|Write to path |
|Exit          |
#--------------#
```

## Building

It's very simple to compile plank. All one has to do is...

`mk`

## Bugs & issues

* Plank Currently...

	- will not tell if a file has been saved or not.

	- does not have undo or redo.

	- does not ave a search function to mark a word or mark all given words.

	- have anything in the form of argument flags, a future version might have "-r" as a flag for read-only mode.

*
