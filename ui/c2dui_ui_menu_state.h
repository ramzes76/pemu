//
// Created by cpasjuste on 16/02/18.
//

#ifndef C2DUI_MENU_STATE_H
#define C2DUI_MENU_STATE_H

class UiStateList;

namespace c2dui {

    class UiStateMenu : public SkinnedRectangle {

    public:

        explicit UiStateMenu(UiMain *ui);

        void setVisibility(c2d::Visibility visibility, bool tweenPlay = false) override;

        bool onInput(c2d::Input::Player *players) override;

        UiMain *getUi() { return ui; };

        virtual bool loadStateCore(const char *path) { return false; };

        virtual bool saveStateCore(const char *path) { return false; };

    private:

        UiMain *ui = nullptr;
        UiStateList *uiStateList = nullptr;
        SkinnedText *title = nullptr;
        bool isEmuRunning = false;
    };
}

#endif //C2DUI_MENU_STATE_H
