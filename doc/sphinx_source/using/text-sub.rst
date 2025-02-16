Textfile Substitutions
Last revised: March 08, 2002

======================
Textfile Substitutions
======================

These %-variables can be inserted into help files, the banner, the MOTD,
and other text files. There are four variables that can be used to format
text:

+------+---------------------------------------------------------+
| %b   | display bold                                            |
+------+---------------------------------------------------------+
| %v   | display inverse                                         |
+------+---------------------------------------------------------+
| %_   | display underline                                       |
+------+---------------------------------------------------------+
| %f   | display flashing via telnet; bold underline via IRC     |
+------+---------------------------------------------------------+

These variables will be interpreted by Eggdrop and replaced by their
respective values:

+------+---------------------------------------------------------+
| %B   | bot's nickname (i.e. "LamestBot")                       |
+------+---------------------------------------------------------+
| %V   | current Eggdrop version (i.e. "eggdrop v1.9.5")         |
+------+---------------------------------------------------------+
| %E   | long form of %V (i.e. "Eggdrop v1.9.5 (C) 1997 Robey    |
|      | Pointer (C) 2010 Eggheads Development Team")            |
+------+---------------------------------------------------------+
| %C   | channels the bot is on (i.e. "#lamest, #botnetcentral") |
+------+---------------------------------------------------------+
| %A   | whatever is set in the config file by 'set admin'       |
+------+---------------------------------------------------------+
| %n   | whatever is set in the config file by 'set network'     |
+------+---------------------------------------------------------+
| %T   | the current time (i.e. "15:00")                         |
+------+---------------------------------------------------------+
| %N   | the current user's nickname (i.e. "Robey")              |
+------+---------------------------------------------------------+
| %U   | the current operating system the bot is running on      |
+------+---------------------------------------------------------+
| %%   | a percent sign ("%")                                    |
+------+---------------------------------------------------------+

You can also encode messages which can only be read by people
with certain flags:

 %{+m}
 Only masters would see this.
 %{-}

 %{+A}
 Only people with the user flag A see this.
 %{-}

 %{+b}
 This is only displayed to users doing a remote '.motd' from another bot.
 %{-}

 %{+|m}
 Only channel masters would see this.
 %{-}

Other variables:

+-------------+---------------------------------------------------------+
| %{cols=N}   |  start splitting output into N columns                  |
+-------------+---------------------------------------------------------+
| %{cols=N/W} |  same as above, but use a screen width of W             |
+-------------+---------------------------------------------------------+
| %{end}      |  end columnated or restricted (i.e. %{+m}) block        |
+-------------+---------------------------------------------------------+
| %{center}   |  center the following text (70 columns)                 |
+-------------+---------------------------------------------------------+

  Copyright (C) 1999 - 2023 Eggheads Development Team
