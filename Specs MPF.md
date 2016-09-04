#MPF format specifications.

Welcome to the MPF format specs. The **Murder Party File** format is an open format intended to easily create or adapt murder party scenarios in order to be used with MurderPlayer or any other software that has no other purpose than spending a nice moment with friends.

The MPF is essentially a sqlite database, with some constraints.
Here are the tables you will find in a MPF:

###MPF
This table must be present in the database, otherwise the file won't be recognise as a valid MPF.
There shall be two columns, one named "key", the other one "values".
In **v0.1**, four keys are needed to make a valid MPF:
- *MPF version* : this is the standard MPF version when the file is created
- *utility* : name of the software used to create the file
- *version* : version of the software used to create the file
- *timestamp* : timestamp of when the file is created. Useful for unicity


###Scenario
This table is not mandatory to be recognised as a valid MPF, however, it is useless not to have it, as it holds the basics informations for the game. As for the MPF table, there shall be two columns, one named "key", the other one "values".
In **v0.1** here's what you can find in this table:
- *storyName* : The name of the scenario
- *players* : number of player for the game
- *masters* : how many GM you will need for the game
- *length* : duration of the game

Following entries are not mandatory, but usually much appreciated:
- *author* : who created the Murder Party
- *year* : Year the game was published
- *synopsis* : a summary of what's happening in the game, just what you need to appeal the players.




#ROADMAP

__v0.1__
Version 0.1 features format-specifics informations, general scenario informations and player data.

__v0.2__
Version 0.2 supports investigations.

__v0.3__
Version 0.3 adds support of scenario events and investigation reports.

__v0.4__
Version 0.4 will support user scripts. This needs a lot of work, and needs to be clearly defined.
