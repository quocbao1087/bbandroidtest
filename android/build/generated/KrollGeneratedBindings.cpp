/* C++ code produced by gperf version 3.0.3 */
/* Command-line: /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/gperf -L C++ -E -t /Users/quocbao/Documents/Appcelerator_Studio_Workspace/bbandroidtest/android/build/generated/KrollGeneratedBindings.gperf  */
/* Computed positions: -k'' */

#line 3 "/Users/quocbao/Documents/Appcelerator_Studio_Workspace/bbandroidtest/android/build/generated/KrollGeneratedBindings.gperf"


#include <string.h>
#include <v8.h>
#include <KrollBindings.h>

#include "bb.test.ExampleProxy.h"
#include "bb.test.BbandroidtestModule.h"


#line 14 "/Users/quocbao/Documents/Appcelerator_Studio_Workspace/bbandroidtest/android/build/generated/KrollGeneratedBindings.gperf"
struct titanium::bindings::BindEntry;
/* maximum key range = 8, duplicates = 0 */

class BbandroidtestBindings
{
private:
  static inline unsigned int hash (const char *str, unsigned int len);
public:
  static struct titanium::bindings::BindEntry *lookupGeneratedInit (const char *str, unsigned int len);
};

inline /*ARGSUSED*/
unsigned int
BbandroidtestBindings::hash (register const char *str, register unsigned int len)
{
  return len;
}

struct titanium::bindings::BindEntry *
BbandroidtestBindings::lookupGeneratedInit (register const char *str, register unsigned int len)
{
  enum
    {
      TOTAL_KEYWORDS = 2,
      MIN_WORD_LENGTH = 20,
      MAX_WORD_LENGTH = 27,
      MIN_HASH_VALUE = 20,
      MAX_HASH_VALUE = 27
    };

  static struct titanium::bindings::BindEntry wordlist[] =
    {
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""},
#line 17 "/Users/quocbao/Documents/Appcelerator_Studio_Workspace/bbandroidtest/android/build/generated/KrollGeneratedBindings.gperf"
      {"bb.test.ExampleProxy",::bb::test::bbandroidtest::ExampleProxy::bindProxy,::bb::test::bbandroidtest::ExampleProxy::dispose},
      {""}, {""}, {""}, {""}, {""}, {""},
#line 16 "/Users/quocbao/Documents/Appcelerator_Studio_Workspace/bbandroidtest/android/build/generated/KrollGeneratedBindings.gperf"
      {"bb.test.BbandroidtestModule",::bb::test::BbandroidtestModule::bindProxy,::bb::test::BbandroidtestModule::dispose}
    };

  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      unsigned int key = hash (str, len);

      if (key <= MAX_HASH_VALUE)
        {
          register const char *s = wordlist[key].name;

          if (*str == *s && !strcmp (str + 1, s + 1))
            return &wordlist[key];
        }
    }
  return 0;
}
#line 18 "/Users/quocbao/Documents/Appcelerator_Studio_Workspace/bbandroidtest/android/build/generated/KrollGeneratedBindings.gperf"

