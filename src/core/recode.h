#ifndef IRSSI_CORE_RECODE_H
#define IRSSI_CORE_RECODE_H

char *recode_in (const SERVER_REC *server, const char *str, const char *target);
char *recode_out (const SERVER_REC *server, const char *str, const char *target);
char **recode_split(const SERVER_REC *server, const char *str,
		    const char *target, int len, gboolean onspace);
gboolean is_valid_charset(const char *charset);
gboolean is_utf8(void);
void recode_update_charset(void);

void recode_init (void);
void recode_deinit (void);

#endif /* IRSSI_CORE_RECODE_H */
