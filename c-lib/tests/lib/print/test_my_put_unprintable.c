/*
** EPITECH PROJECT, 2020
** my_put_unprintable
** File description:
** tests
*/

#include "tests.h"
#include "print.h"

TestSuite(my_put_unprintable, .init=redirect_all_stdout, .timeout=0.075);

Test(my_put_unprintable, test_with_every_char)
{
    char *str;
    char unprint[32];

    for (int i = 0; i < 31; i++)
        unprint[i] = i + 1;
    unprint[31] = 0;
    asprintf(&str, "%s%s%s", "\\001\\002\\003\\004\\005\\006\\007\\010\\011",
    "\\012\\013\\014\\015\\016\\017\\020\\021\\022\\023\\024\\025\\026\\027",
    "\\030\\031\\032\\033\\034\\035\\036\\037\\040");
    my_put_unprintable(unprint);
    cr_assert_stdout_eq_str(str);
    free(str);
}