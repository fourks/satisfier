/*  Copyright (c) 2015 James Laird-Wah
 *
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, you can obtain one at http://mozilla.org/MPL/2.0/. */


typedef struct {
    char *name;
    int isdir;
} file_ent;

void menu_init(void);
int menu_picklist(file_ent *entries, int n_entries, char *caption, font_struct *font);
