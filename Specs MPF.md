#MPF format specifications

Welcome to the MPF format specs. The **Murder Party File** format is an open format intended to easily create or adapt murder party scenarios in order to be used with MurderPlayer or any other software that has no other purpose than spending a nice moment with friends.

The MPF is essentially a sqlite database, with some constraints.
Here are the tables you will find in a MPF:

##v0.1
Version 0.1 features format-specifics informations, general scenario informations and player data.

__MPF__

This table must be present in the database, otherwise the file won't be recognise as a valid MPF.
There shall be two columns, one named "key" (varchar), the other one "values" (text).
In **v0.1**, four keys are needed to make a valid MPF:
- *MPF version* : this is the standard MPF version when the file is created (format: float)
- *utility* : name of the software used to create the file (format: string)
- *version* : version of the software used to create the file (format: string)
- *timestamp* : timestamp of when the file is created. Useful for unicity (format: int or long)


__Scenario__

This table is not mandatory to be recognised as a valid MPF, however, it is useless not to have it, as it holds the basics informations for the game. As for the MPF table, there shall be two columns, one named "key" (varchar), the other one "values" (text).
In **v0.1** here's what you can find in this table:
- *storyName* : The name of the scenario (format: string)
- *players* : number of player for the game (format: int)
- *masters* : how many GM you will need for the game (format: int)
- *length* : duration of the game

Following entries are not mandatory, but usually much appreciated:
- *author* : who created the Murder Party (format: string)
- *year* : Year the game was published (format: int)
- *synopsis* : a summary of what's happening in the game, just what you need to appeal the players (Rich Text)


__Characters__

This table is not mandatory to be recognised as a valid MPF, however, it is useless not to have it, as it holds the basics informations for the characters, thus, for players as well.
This table holds 4 columns: id (integer), name (varchar 255), startPowerPoints (integer), description (text).


Example:

|id|name|sPP|desc|
|---|---|---|---|
| 1 | Mario | 3 | plumber |
| 2 | Luigi | 5 | brother |
| 3 | Peach | 4 | princess |
| 4 | Toad  | 4 | Mushroom |


##v0.11
Version 0.11 adds status for characters (player, GM, NPC)
In the **Character** table, we add a new column called type (varchar)

|id|name|sPP|desc|type|
|---|---|---|---|---|
| 1 | Mario | 3 | plumber |player|
| 2 | Luigi | 5 | brother |GM|
| 3 | Peach | 4 | princess |NPC|
| 4 | Toad  | 4 | Mushroom |NPC|


##v0.2
Version 0.2 supports investigations.

##v0.21
Version 0.21 adds a few facultatives data in MPF Table (contact, legal, made by).

##v0.22
Version 0.22 sets precisely duration format.

##v1.0
Version 1.0 adds support of scenario events and investigation reports.

##v2.0
Version 2.0 adds support of various rulesets.

##v3.0
Version 3.0 will support user scripts. This needs a lot of work, and needs to be clearly defined.
