================
Eggdrop Features
================

  Eggdrop is the most advanced IRC robot available. It has been under
  development since December 1993, and unlike most other bots, it is still
  regularly updated. Some of its features include:

    * Capability (CAP) support used to enable IRCv3 features. Eggdrop currently supports the following IRCv3 capability sets: account-notify, account-tag, away-notify, cap-notify, chghost, echo-message, extended-join, invite-notify, message-tags, monitor, SASL, server-time, setname, WHOX, and +typing.

    * Support for SSL-enabled IRC servers

    * Support for IPv6 users

    * Support for Twitch servers

    * Completely separate channel user lists like having a separate bot for
      each channel.

    * A "party line" available through dcc chat or telnet, with multiple
      channels, giving you the ability to talk to people without being
      affected by netsplits.

    * A "botnet". A botnet consists of one or more bots linked together. This
      can allow bots to op each other securely, control floods efficiently,
      and share user lists, ban lists, exempt/invite lists, and ignore lists
      (if sharing is enabled).

    * User records are saved on disk and alterable via dcc chat. Each user
      can have a password (encrypted), a list of valid hostmasks, a set of
      access flags, etc.

    * The ability to "learn" new users (if you choose to let the bot do so)
      by letting users /MSG the bot "hello". The bot will grant them automatic
      access of whatever type you specify (or even no access at all).

    * A file system where users can upload and download files in an
      environment that looks and acts (for the most part) like a typical
      UNIX system. It also has the ability to mark files and directories
      as hidden -- unaccessible to people without certain user flags.

    * Console mode: you can view each channel through dcc chat or telnet,
      selectively looking at mode changes, joins and parts, channel talk,
      or any combination of the above.

    * A scripting language: commands and features can be easily added to
      the bot by means of the Tcl scripting language, giving you the power
      of TOTAL customization of your bot.

    * Module support: you can remove/add features to your bot by adding or
      removing modules.

Copyright (C) 1997 Robey Pointer

Copyright (C) 2000 - 2023 Eggheads Development Team
