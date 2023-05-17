#ifndef CSTR_H
#	define CSTR_H

#	include <stddef.h>
#	include <stdint.h>

size_t cstr_len(const char *const s);
void cstr_ncopy(char *const *const b, const char *const s, size_t n);
void cstr_copy(char *const *const b, const char *const s);
char *cstr_dup(const char *const s);
void cstr_append(char **const s0, const char *const s1);
char *cstr_concat(const char *const s0, const char *const s1);
char *cstr_bashslice(const char *const s, const size_t o, const size_t l);
char *cstr_substr(const char *const s, const size_t s1, const size_t e);
char *cstr_lcut(const char *const s, const size_t n);
char *cstr_rcut(const char *const s, const size_t n);
uint8_t cstr_nequals(const char *const s0, const char *const s1, size_t n);
uint8_t cstr_equals(const char *const s0, const char *const s1);
void cstr_to_reversed(char *const *const s);
char *cstr_reverse(const char *const s);
size_t cstr_contains(const char *const s0, const char *const s1);
uint8_t cstr_startswith(const char *const s0, const char *const s1);
uint8_t cstr_endsswith(const char *const s0, const char *const s1);
char *cstr_replace_once(const char *const s0, const char *const s1, const char *const s2);
char *cstr_replace(const char *const s0, const char *const s1, const char *const s2);
uint8_t char_is_upcase(const char c);
uint8_t char_is_downcase(const char c);
uint8_t char_is_space(const char c);
uint8_t char_is_alpha(const char c);
uint8_t char_is_digit(const char c);
uint8_t char_is_uphex(const char c);
uint8_t char_is_downhex(const char c);
uint8_t char_is_hex(const char c);
uint8_t char_is_octal(const char c);
uint8_t char_is_binary(const char c);
uint8_t char_is_pental(const char c);
char char_to_upcase(const char c);
char char_to_downcase(const char c);
uint8_t char_to_digit(const char c);
uint8_t char_to_uphex(const char c);
uint8_t char_to_downhex(const char c);
uint8_t char_to_hex(const char c);
uint8_t char_to_octal(const char c);
uint8_t char_to_binary(const char c);
uint8_t char_to_pental(const char c);
void cstr_to_upcase(char *const *const s);
void cstr_to_downcase(char *const *const s);
char *cstr_upcase(const char *const s);
char *cstr_downcase(const char *const s);
uint8_t cstr_is_upcase(const char *const s);
uint8_t cstr_is_downcase(const char *const s);
char *cstr_mul(const char *const s, size_t t);
uint8_t cstr_is_digit(const char *const s);
char *cstr_ltrim(const char *const s);
char *cstr_rtrim(const char *const s);
char *cstr_trim(const char *const s);
char *cstr_lpad(const char *const s, const size_t n);
char *cstr_rpad(const char *const s, const size_t n);
char *cstr_pad(const char *const s, const size_t n0, const size_t n1);
uint8_t cstr_is_digit(const char *const s);
uint8_t cstr_is_uphex(const char *const s);
uint8_t cstr_is_downhex(const char *const s);
uint8_t cstr_is_hex(const char *const s);
uint8_t cstr_is_octal(const char *const s);
uint8_t cstr_is_binary(const char *const s);
uint8_t cstr_is_pental(const char *const s);
uint64_t cstr_to_uint(const char *const s);
int64_t cstr_to_int(const char *const s);
uint64_t cstr_to_uphex(const char *const s);
uint64_t cstr_to_downhex(const char *const s);
uint64_t cstr_to_hex(const char *const s);
uint64_t cstr_to_octal(const char *const s);
uint64_t cstr_to_binary(const char *const s);
uint64_t cstr_to_pental(const char *const s);
size_t cstrarr_len(const char *const *const a);
void cstrarr_append(char ***const a, char *const s);
void cstrarr_prepend(char ***const a, char *const s);
void cstrarr_push(char ***const a, const char *const s);
void cstrarr_pushb(char ***const a, const char *const s);
void cstrarr_append_cstrarr(char ***const a0, char ** const a1);
char *cstrarr_pop(char ***const a);
char *cstrarr_shift(char ***const a);
size_t cstr_find_char(const char *const s, const char c);
size_t cstr_find_space(const char *const s);
void cstr_ltrim_self(char **const s);
void cstr_rtrim_self(char **const s);
void cstr_trim_self(char **const s);
//char **cstr_split_char(const char *const s, const char c);
char **cstr_split(const char *const s0, const char *const s1);
char *cstrarr_join(const char *const *const a, const char *const s);
void cstrarr_free(char ***const a);
void cstrarr_reverse(const char **const *const a);
size_t cstrarr_count(const char *const *const a, const char *const s);
void cstrarr_replace(char **const *const a, const char *const s0, const char *const s1);
#endif /* !CSTR_H */
