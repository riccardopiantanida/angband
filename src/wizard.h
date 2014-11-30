/**
 * \file wizard.h
 * \brief Debug mode commands, stats collection, spoiler generation
 *
 * Copyright (c) 1997 Ben Harrison, James E. Wilson, Robert A. Koeneke
 *
 * This work is free software; you can redistribute it and/or modify it
 * under the terms of either:
 *
 * a) the GNU General Public License as published by the Free Software
 *    Foundation, version 2, or
 *
 * b) the "Angband licence":
 *    This software may be copied and distributed for educational, research,
 *    and not for profit purposes provided that this copyright and statement
 *    are included in all such copies.  Other copyrights may also apply.
 */

#ifndef INCLUDED_WIZARD_H
#define INCLUDED_WIZARD_H

/* wiz-debug.c */
extern void do_cmd_debug(void);

/* wiz-stats.c */
void stats_collect(void);
void disconnect_stats(void);
void pit_stats(void);

/* wiz-spoil.c */
void do_cmd_spoilers(void);
bool make_fake_artifact(struct object *obj, struct artifact *artifact);

#endif /* !INCLUDED_WIZARD_H */
