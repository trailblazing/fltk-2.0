// generated by Fast Light User Interface Designer (fluid) version 2.0100

#ifndef HelpDialog_h
#define HelpDialog_h
// Header for //\n// "$Id: HelpDialog.fl 4721 2005-12-19 16:52:...
#include <fltk/DoubleBufferWindow.h>
#include <fltk/HelpView.h>
#include <fltk/Group.h>
#include <fltk/Button.h>
#include <fltk/Input.h>

namespace fltk  {

class FL_IMAGES_API HelpDialog  {
  int index_;
  int max_;
  int line_[100];
  char file_[100][256];
  int find_pos_;
public:
  HelpDialog();
private:
  fltk::DoubleBufferWindow *window_;
    fltk::HelpView *view_;
    inline void cb_view__i(fltk::HelpView*, void*);
    static void cb_view_(fltk::HelpView*, void*);
      inline void cb_Close_i(fltk::Button*, void*);
      static void cb_Close(fltk::Button*, void*);
      fltk::Button *back_;
      inline void cb_back__i(fltk::Button*, void*);
      static void cb_back_(fltk::Button*, void*);
      fltk::Button *forward_;
      inline void cb_forward__i(fltk::Button*, void*);
      static void cb_forward_(fltk::Button*, void*);
      fltk::Button *smaller_;
      inline void cb_smaller__i(fltk::Button*, void*);
      static void cb_smaller_(fltk::Button*, void*);
      fltk::Button *larger_;
      inline void cb_larger__i(fltk::Button*, void*);
      static void cb_larger_(fltk::Button*, void*);
        fltk::Input *find_;
        inline void cb_find__i(fltk::Input*, void*);
        static void cb_find_(fltk::Input*, void*);
public:
  ~HelpDialog();
  int h();
  void hide();
  void load(const char *f);
  void position(int xx, int yy);
  void resize(int xx, int yy, int ww, int hh);
  void show();
  void show(int argc, char **argv);
  void textsize(uchar s);
  uchar textsize();
  void topline(const char *n);
  void topline(int n);
  void value(const char *f);
  const char * value() const;
  int visible();
  int w();
  int x();
  int y();
};
}
// Header for //\n// End of "$Id: HelpDialog.fl 4721 2005-12-19...
#endif
