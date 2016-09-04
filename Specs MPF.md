#Welcome to the MPF format specifications.

The Murder Party File format is an open format intended to easily create or adapt murder party scenarios in order to be used with MurderPlayer or any other software that has no other purpose than spending a nice moment with friends.

The MPF is essentially a sqlite database, with some constraints.

##MPF
This table must be present in the database, otherwise the file won't be recognise as a valid MPF.
There shall be two columns, one named "key", the other one "values".
In *v0.1*, four keys are needed to make a valid MPF:
- "MPF version": this is the standard MPF version when the file is created
- "Made with": name of the software used to create the file
- "Made with - version": version of the software used to create the file
- "Timestamp": timestamp of when the file is created. Useful for unicity

#ROADMAP

__v0.1__
Version 0.1 features format-specifics informations, general scenario informations and player data.

__v0.2__
Version 0.2 supports investigations.

__v0.3__
Version 0.3 adds support of scenario events and investigation reports.
