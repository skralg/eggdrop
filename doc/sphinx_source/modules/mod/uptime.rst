Last revised: January 1, 2002

.. _uptime:

-------------
Uptime Module
-------------

This module reports uptime statistics to http://uptime.eggheads.org. Go look
and see what your uptime is! It takes about 9 hours to show up, so if your
bot isn't listed, try again later.

Information sent to the server includes the bot's uptime, botnet-nick,
server, version, and IP address. This information is stored in a temporary
logfile for debugging purposes only. The only publicly available information
will be the bot's botnet-nick, version and uptime. If you do not wish for
this information to be sent, comment out the 'loadmodule uptime' line in your
bot's config file.

This module requires: server

Put this line into your Eggdrop configuration file to load the uptime
module::

  loadmodule uptime

Copyright (C) 2001 - 2023 Eggheads Development Team
