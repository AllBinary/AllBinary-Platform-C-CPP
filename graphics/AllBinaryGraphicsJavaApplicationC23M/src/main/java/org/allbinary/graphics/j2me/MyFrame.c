/*
 *
 * AllBinary Open License Version 1
 * Copyright (c) 2011 AllBinary
 * 
 * By agreeing to this license you and any business entity you represent are
 * legally bound to the AllBinary Open License Version 1 legal agreement.
 * 
 * You may obtain the AllBinary Open License Version 1 legal agreement from
 * AllBinary or the root directory of AllBinary's AllBinary Platform repository.
 * 
 * Created By: Travis Berthelot
 *  
 */
// Generated Code Do Not Modify
// package org.allbinary.graphics.j2me

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/io/File.h"
// #include "java/util/HashMap.h"
#include "org/allbinary/data/tree/dom/XslHelper.h"
#include "org/allbinary/dom/DomHelper.h"
#include "org/allbinary/graphics/j2me/dialog/NewWorkAreaJDialog.h"
#include "org/allbinary/graphics/j2me/dialog/RotateJDialog.h"
#include "org/allbinary/graphics/j2me/workarea/WorkAreaDom.h"
#include "org/allbinary/graphics/j2me/workarea/WorkAreaJPanel.h"
#include "org/allbinary/graphics/j2me/workarea/WorkAreaJPanelInterface.h"
#include "org/allbinary/graphics/j2me/workarea/canvas/event/MyCanvasEvent.h"
#include "org/allbinary/graphics/j2me/workarea/canvas/event/MyCanvasEventService.h"
#include "org/allbinary/graphics/j2me/workarea/canvas/event/MyCanvasEventSource.h"
#include "org/allbinary/gui/dialog/FileJDialog.h"
#include "org/allbinary/gui/dialog/FileJDialogListenerInterface.h"
#include "org/allbinary/gui/dialog/HashMapJDialogListenerInterface.h"
#include "org/allbinary/log/LOGGING.h"
#include "org/allbinary/logic/communication/log/GuiLog.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/math/SmallIntegerSingletonFactory.h"
#include "org/allbinary/math/AngleFactory.h"
#include "org/allbinary/string/CommonLabels.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/w3c/dom/Document.h"
#include "org/allbinary/graphics/j2me/JFrame.h"
#include "org/allbinary/graphics/j2me/KeyListener.h"

typedef struct MyFrame MyFrame;
struct MyFrame {
    JFrame base;
    FileJDialogListenerInterface FileJDialogListenerInterface_interface;
    HashMapJDialogListenerInterface HashMapJDialogListenerInterface_interface;
    KeyListener KeyListener_interface;
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    GuiLog* guiLog;
    XslHelper* xslHelper;
    const char* JAVA_TEMPLATE;
    const char* SAVEEXTENSION;
    const char* JAVAEXTENSION;
    FileJDialog* fileJDialog;
    RotateJDialog* rotateJDialog;
    JButton* animateJButton;
    JMenuItem* autoDamageJMenuItem;
    JMenuItem* autoExplodeJMenuItem;
    JMenuItem* autoGrowJMenuItem;
    JMenuItem* autoRotateGenerationJMenuItem;
    JMenuItem* autoSheildMenuItem;
    JMenuItem* autoShrinkJMenuItem;
    JMenuItem* centerJMenuItem;
    JMenuItem* copyJMenuItem1;
    JMenuItem* exitJMenuItem;
    JMenuItem* explodeAllJMenuItem;
    JMenuItem* exportJMenuItem1;
    JMenu* fileJMenu;
    JMenu* frameJMenu;
    JMenu* generateJMenu;
    JMenuItem* insertAfterJMenuItem;
    JMenuItem* insertBeforeJMenuItem;
    JButton* jButton1;
    JButton* jButton2;
    JButton* jButton3;
    JButton* jButton4;
    JButton* jButton41;
    JButton* jButton5;
    JMenu* jMenu1;
    JMenuItem* jMenuItem1;
    JPanel* jPanel1;
    JTabbedPane* jTabbedPane;
    JToolBar* jToolBar1;
    JPanel* mainJPanel;
    JMenuBar* menuJMenuBar;
    JMenuItem* newJMenuItem;
    JMenuItem* nextFrameJMenuItem;
    JMenu* objectJMenu;
    JButton* openJButton;
    JMenuItem* openJMenuItem;
    JButton* playJButton;
    JMenuItem* previousFrameJMenuItem;
    JMenuItem* removeJMenuItem;
    JMenuItem* saveAsJMenuItem;
    JButton* saveJButton;
    JMenuItem* saveJMenuItem;
    JPanel* statusJPanel;
    JButton* stopJjButton;
    JMenu* viewJMenu;
    JMenuItem* zoomInJMenuItem;
    JMenuItem* zoomOutJMenuItem;
};

static constexpr int32_t MyFrame_MAXWORKAREAS = 10;
static int32_t MyFrame_numberOfWorkAreas = 0;
static const char* MyFrame_PATH = "G:/mnt/bc/mydev/work/graphics/AllBinaryGraphicsJavaApplication";
static const char* MyFrame_SAVE_PATH;
static const char* MyFrame_TEMPLATE_EXPORT_PATH;
JLabel* MyFrame_statusJLabel = nullptr;

MyFrame* MyFrame_new(void);

void MyFrame_init(MyFrame* this);
static void MyFrame_initComponents(MyFrame* this);
static void MyFrame_explodeAllJMenuItemMousePressed(MyFrame* this, MouseEvent* evt);
static void MyFrame_autoExplodeJMenuItemMousePressed(MyFrame* this, MouseEvent* evt);
static void MyFrame_stopJjButtonMousePressed(MyFrame* this, MouseEvent* evt);
static void MyFrame_playJButtonMousePressed(MyFrame* this, MouseEvent* evt);
static void MyFrame_autoRotateGenerationJMenuItemMousePressed(MyFrame* this, MouseEvent* evt);
static void MyFrame_zoomOutJMenuItemMousePressed(MyFrame* this, MouseEvent* evt);
static void MyFrame_zoomInJMenuItemMousePressed(MyFrame* this, MouseEvent* evt);
static void MyFrame_openJMenuItemActionPerformed(MyFrame* this, ActionEvent* evt);
static void MyFrame_exportJMenuItem1ActionPerformed(MyFrame* this, ActionEvent* evt);
static void MyFrame_saveJMenuItemMousePressed(MyFrame* this, MouseEvent* evt);
static void MyFrame_jTabbedPaneStateChanged(MyFrame* this, ChangeEvent* evt);
static void MyFrame_frameJMenuActionPerformed(MyFrame* this, ActionEvent* evt);
static void MyFrame_exitJMenuItemActionPerformed(MyFrame* this, ActionEvent* evt);
static void MyFrame_newJMenuItemActionPerformed(MyFrame* this, ActionEvent* evt);
static void MyFrame_fileJMenuActionPerformed(MyFrame* this, ActionEvent* evt);
static void MyFrame_exitForm(MyFrame* this, WindowEvent* evt);
static void MyFrame_openJButtonActionPerformed(MyFrame* this, ActionEvent* evt);
static void MyFrame_jButton2ActionPerformed(MyFrame* this, ActionEvent* evt);
static void MyFrame_centerJMenuItemActionPerformed(MyFrame* this, ActionEvent* evt);
static void MyFrame_saveJButtonActionPerformed(MyFrame* this, ActionEvent* evt);
static void MyFrame_jButton1ActionPerformed(MyFrame* this, ActionEvent* evt);
static void MyFrame_jMenuItem1ActionPerformed(MyFrame* this, ActionEvent* evt);
void MyFrame_onFiles(MyFrame* this, File** files);
static void MyFrame_newGraphics(MyFrame* this);
static void MyFrame_openGraphics(MyFrame* this);
static void MyFrame_export(MyFrame* this);
static void MyFrame_save(MyFrame* this);
void MyFrame_onHashMap(MyFrame* this, HashMap* hashMap);
static WorkAreaJPanelInterface* MyFrame_getSelectedWorkArea(MyFrame* this);
void MyFrame_updateSelectedWorkArea(MyFrame* this);
void MyFrame_add(MyFrame* this, WorkAreaJPanelInterface* newCanvasInterface);
void MyFrame_keyPressed(MyFrame* this, KeyEvent* keyEvent);
void MyFrame_keyReleased(MyFrame* this, KeyEvent* keyEvent);
void MyFrame_keyTyped(MyFrame* this, KeyEvent* keyEvent);
void MyFrame_main(const char** args);

// Static fields with runtime initializers: call this once at startup
void MyFrame_staticInit(void) {
    MyFrame_SAVE_PATH = java_concat(java_string_of(MyFrame_PATH), "/save");
    MyFrame_TEMPLATE_EXPORT_PATH = java_concat(java_string_of(MyFrame_PATH), "/templates/export");
}

static void MyFrame_initFields(MyFrame* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    this->guiLog = GuiLog_getInstance();
    this->xslHelper = XslHelper_getInstance();
    this->JAVA_TEMPLATE = "svgExport.xsl";
    this->SAVEEXTENSION = ".gxml";
    this->JAVAEXTENSION = ".javax";
    
    
    this->animateJButton = nullptr;
    this->autoDamageJMenuItem = nullptr;
    this->autoExplodeJMenuItem = nullptr;
    this->autoGrowJMenuItem = nullptr;
    this->autoRotateGenerationJMenuItem = nullptr;
    this->autoSheildMenuItem = nullptr;
    this->autoShrinkJMenuItem = nullptr;
    this->centerJMenuItem = nullptr;
    this->copyJMenuItem1 = nullptr;
    this->exitJMenuItem = nullptr;
    this->explodeAllJMenuItem = nullptr;
    this->exportJMenuItem1 = nullptr;
    this->fileJMenu = nullptr;
    this->frameJMenu = nullptr;
    this->generateJMenu = nullptr;
    this->insertAfterJMenuItem = nullptr;
    this->insertBeforeJMenuItem = nullptr;
    this->jButton1 = nullptr;
    this->jButton2 = nullptr;
    this->jButton3 = nullptr;
    this->jButton4 = nullptr;
    this->jButton41 = nullptr;
    this->jButton5 = nullptr;
    this->jMenu1 = nullptr;
    this->jMenuItem1 = nullptr;
    this->jPanel1 = nullptr;
    this->jTabbedPane = nullptr;
    this->jToolBar1 = nullptr;
    this->mainJPanel = nullptr;
    this->menuJMenuBar = nullptr;
    this->newJMenuItem = nullptr;
    this->nextFrameJMenuItem = nullptr;
    this->objectJMenu = nullptr;
    this->openJButton = nullptr;
    this->openJMenuItem = nullptr;
    this->playJButton = nullptr;
    this->previousFrameJMenuItem = nullptr;
    this->removeJMenuItem = nullptr;
    this->saveAsJMenuItem = nullptr;
    this->saveJButton = nullptr;
    this->saveJMenuItem = nullptr;
    this->statusJPanel = nullptr;
    this->stopJjButton = nullptr;
    this->viewJMenu = nullptr;
    this->zoomInJMenuItem = nullptr;
    this->zoomOutJMenuItem = nullptr;
}


void MyFrame_init(MyFrame* this) {
    JFrame_init(&this->base);
    MyFrame_initFields(this);
        MyFrame_initComponents(this);
        MyFrame_setSize(this, Dimension_new(550, 400));
        JPanel_setSize(this->mainJPanel, Dimension_new(550, 400));
        JTabbedPane_setSize(this->jTabbedPane, Dimension_new(550, 400));
        this->fileJDialog = FileJDialog_new();
        FileJDialog_addFinishedListener(this->fileJDialog, this);
        this->rotateJDialog = RotateJDialog_new(this, false);
}

MyFrame* MyFrame_new(void) {
    MyFrame* this = calloc(1, sizeof(MyFrame));
    MyFrame_init(this);
    return this;
}


static void MyFrame_initComponents(MyFrame* this) {
        this->jToolBar1 = JToolBar_new();
        this->jButton2 = JButton_new();
        this->saveJButton = JButton_new();
        this->jButton1 = JButton_new();
        this->openJButton = JButton_new();
        this->jButton3 = JButton_new();
        this->jButton4 = JButton_new();
        this->jButton41 = JButton_new();
        this->jButton5 = JButton_new();
        this->animateJButton = JButton_new();
        this->playJButton = JButton_new();
        this->stopJjButton = JButton_new();
        this->jPanel1 = JPanel_new();
        this->mainJPanel = JPanel_new();
        this->jTabbedPane = JTabbedPane_new();
        this->statusJPanel = JPanel_new();
        MyFrame_statusJLabel = JLabel_new();
        this->menuJMenuBar = JMenuBar_new();
        this->fileJMenu = JMenu_new();
        this->newJMenuItem = JMenuItem_new();
        this->openJMenuItem = JMenuItem_new();
        this->saveJMenuItem = JMenuItem_new();
        this->saveAsJMenuItem = JMenuItem_new();
        this->exportJMenuItem1 = JMenuItem_new();
        this->exitJMenuItem = JMenuItem_new();
        this->viewJMenu = JMenu_new();
        this->zoomInJMenuItem = JMenuItem_new();
        this->zoomOutJMenuItem = JMenuItem_new();
        this->objectJMenu = JMenu_new();
        this->explodeAllJMenuItem = JMenuItem_new();
        this->frameJMenu = JMenu_new();
        this->previousFrameJMenuItem = JMenuItem_new();
        this->nextFrameJMenuItem = JMenuItem_new();
        this->removeJMenuItem = JMenuItem_new();
        this->copyJMenuItem1 = JMenuItem_new();
        this->insertAfterJMenuItem = JMenuItem_new();
        this->insertBeforeJMenuItem = JMenuItem_new();
        this->generateJMenu = JMenu_new();
        this->centerJMenuItem = JMenuItem_new();
        this->autoDamageJMenuItem = JMenuItem_new();
        this->autoExplodeJMenuItem = JMenuItem_new();
        this->autoGrowJMenuItem = JMenuItem_new();
        this->jMenuItem1 = JMenuItem_new();
        this->autoRotateGenerationJMenuItem = JMenuItem_new();
        this->autoSheildMenuItem = JMenuItem_new();
        this->autoShrinkJMenuItem = JMenuItem_new();
        this->jMenu1 = JMenu_new();
        MyFrame_addWindowListener(this, WindowAdapter_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
            

        void MyFrame_windowClosing(MyFrame* this, WindowEvent* evt) {
                MyFrame_exitForm(this, evt);
        }
#endif
);
        JButton_setText(this->jButton2, "New");
        JButton_addActionListener(this->jButton2, ActionListener_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
            

        void MyFrame_actionPerformed(MyFrame* this, ActionEvent* evt) {
                MyFrame_jButton2ActionPerformed(this, evt);
        }
#endif
);
        JToolBar_add(this->jToolBar1, this->jButton2);
        JButton_setText(this->saveJButton, "Save");
        JButton_addActionListener(this->saveJButton, ActionListener_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
            

        void MyFrame_actionPerformed(MyFrame* this, ActionEvent* evt) {
                MyFrame_saveJButtonActionPerformed(this, evt);
        }
#endif
);
        JToolBar_add(this->jToolBar1, this->saveJButton);
        JButton_setText(this->jButton1, "Export");
        JButton_addActionListener(this->jButton1, ActionListener_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
            

        void MyFrame_actionPerformed(MyFrame* this, ActionEvent* evt) {
                MyFrame_jButton1ActionPerformed(this, evt);
        }
#endif
);
        JToolBar_add(this->jToolBar1, this->jButton1);
        JButton_setText(this->openJButton, "Open");
        JButton_addActionListener(this->openJButton, ActionListener_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
            

        void MyFrame_actionPerformed(MyFrame* this, ActionEvent* evt) {
                MyFrame_openJButtonActionPerformed(this, evt);
        }
#endif
);
        JToolBar_add(this->jToolBar1, this->openJButton);
        JButton_setText(this->jButton3, "Copy");
        JToolBar_add(this->jToolBar1, this->jButton3);
        JButton_setText(this->jButton4, "Insert Before");
        JToolBar_add(this->jToolBar1, this->jButton4);
        JButton_setText(this->jButton41, "Insert After");
        JToolBar_add(this->jToolBar1, this->jButton41);
        JButton_setText(this->jButton5, "Delete");
        JToolBar_add(this->jToolBar1, this->jButton5);
        JButton_setText(this->animateJButton, "AnimateEdit");
        JToolBar_add(this->jToolBar1, this->animateJButton);
        JButton_setText(this->playJButton, "Play");
        JButton_addMouseListener(this->playJButton, MouseAdapter_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
            

        void MyFrame_mousePressed(MyFrame* this, MouseEvent* evt) {
                MyFrame_playJButtonMousePressed(this, evt);
        }
#endif
);
        JToolBar_add(this->jToolBar1, this->playJButton);
        JButton_setText(this->stopJjButton, "Stop");
        JButton_addMouseListener(this->stopJjButton, MouseAdapter_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
            

        void MyFrame_mousePressed(MyFrame* this, MouseEvent* evt) {
                MyFrame_stopJjButtonMousePressed(this, evt);
        }
#endif
);
        JToolBar_add(this->jToolBar1, this->stopJjButton);
        JAVA_CALL(MyFrame_getContentPane(this), add, this->jToolBar1, java_awt->BorderLayout->NORTH);
        JPanel_setLayout(this->jPanel1, GridLayout_new(1, 0));
        JPanel_setLayout(this->mainJPanel, GridLayout_new(1, 0));
        JTabbedPane_setMinimumSize(this->jTabbedPane, Dimension_new(550, 400));
        JTabbedPane_addChangeListener(this->jTabbedPane, ChangeListener_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
            

        void MyFrame_stateChanged(MyFrame* this, ChangeEvent* evt) {
                MyFrame_jTabbedPaneStateChanged(this, evt);
        }
#endif
);
        JPanel_add(this->mainJPanel, this->jTabbedPane);
        JPanel_add(this->jPanel1, this->mainJPanel);
        JAVA_CALL(MyFrame_getContentPane(this), add, this->jPanel1, java_awt->BorderLayout->CENTER);
        JPanel_setLayout(this->statusJPanel, GridLayout_new(1, 0));
        JAVA_CALL(MyFrame_statusJLabel, setText, "Status Bar");
        JPanel_add(this->statusJPanel, MyFrame_statusJLabel);
        JAVA_CALL(MyFrame_getContentPane(this), add, this->statusJPanel, java_awt->BorderLayout->SOUTH);
        JMenu_setText(this->fileJMenu, "File");
        JMenu_addActionListener(this->fileJMenu, ActionListener_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
            

        void MyFrame_actionPerformed(MyFrame* this, ActionEvent* evt) {
                MyFrame_fileJMenuActionPerformed(this, evt);
        }
#endif
);
        JMenuItem_setText(this->newJMenuItem, "New");
        JMenuItem_addActionListener(this->newJMenuItem, ActionListener_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
            

        void MyFrame_actionPerformed(MyFrame* this, ActionEvent* evt) {
                MyFrame_newJMenuItemActionPerformed(this, evt);
        }
#endif
);
        JMenu_add(this->fileJMenu, this->newJMenuItem);
        JMenuItem_setText(this->openJMenuItem, "Open");
        JMenuItem_addActionListener(this->openJMenuItem, ActionListener_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
            

        void MyFrame_actionPerformed(MyFrame* this, ActionEvent* evt) {
                MyFrame_openJMenuItemActionPerformed(this, evt);
        }
#endif
);
        JMenu_add(this->fileJMenu, this->openJMenuItem);
        JMenuItem_setText(this->saveJMenuItem, "Save");
        JMenuItem_addMouseListener(this->saveJMenuItem, MouseAdapter_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
            

        void MyFrame_mousePressed(MyFrame* this, MouseEvent* evt) {
                MyFrame_saveJMenuItemMousePressed(this, evt);
        }
#endif
);
        JMenu_add(this->fileJMenu, this->saveJMenuItem);
        JMenuItem_setText(this->saveAsJMenuItem, "SaveAs");
        JMenu_add(this->fileJMenu, this->saveAsJMenuItem);
        JMenuItem_setText(this->exportJMenuItem1, "Export");
        JMenuItem_addActionListener(this->exportJMenuItem1, ActionListener_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
            

        void MyFrame_actionPerformed(MyFrame* this, ActionEvent* evt) {
                MyFrame_exportJMenuItem1ActionPerformed(this, evt);
        }
#endif
);
        JMenu_add(this->fileJMenu, this->exportJMenuItem1);
        JMenuItem_setText(this->exitJMenuItem, "Exit");
        JMenuItem_addActionListener(this->exitJMenuItem, ActionListener_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
            

        void MyFrame_actionPerformed(MyFrame* this, ActionEvent* evt) {
                MyFrame_exitJMenuItemActionPerformed(this, evt);
        }
#endif
);
        JMenu_add(this->fileJMenu, this->exitJMenuItem);
        JMenuBar_add(this->menuJMenuBar, this->fileJMenu);
        JMenu_setText(this->viewJMenu, "View");
        JMenuItem_setText(this->zoomInJMenuItem, "Zoom In");
        JMenuItem_addMouseListener(this->zoomInJMenuItem, MouseAdapter_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
            

        void MyFrame_mousePressed(MyFrame* this, MouseEvent* evt) {
                MyFrame_zoomInJMenuItemMousePressed(this, evt);
        }
#endif
);
        JMenu_add(this->viewJMenu, this->zoomInJMenuItem);
        JMenuItem_setText(this->zoomOutJMenuItem, "Zoom Out");
        JMenuItem_addMouseListener(this->zoomOutJMenuItem, MouseAdapter_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
            

        void MyFrame_mousePressed(MyFrame* this, MouseEvent* evt) {
                MyFrame_zoomOutJMenuItemMousePressed(this, evt);
        }
#endif
);
        JMenu_add(this->viewJMenu, this->zoomOutJMenuItem);
        JMenuBar_add(this->menuJMenuBar, this->viewJMenu);
        JMenu_setText(this->objectJMenu, "Objects");
        JMenuItem_setText(this->explodeAllJMenuItem, "Explode All");
        JMenuItem_addMouseListener(this->explodeAllJMenuItem, MouseAdapter_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
            

        void MyFrame_mousePressed(MyFrame* this, MouseEvent* evt) {
                MyFrame_explodeAllJMenuItemMousePressed(this, evt);
        }
#endif
);
        JMenu_add(this->objectJMenu, this->explodeAllJMenuItem);
        JMenuBar_add(this->menuJMenuBar, this->objectJMenu);
        JMenu_setText(this->frameJMenu, "Frame");
        JMenu_addActionListener(this->frameJMenu, ActionListener_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
            

        void MyFrame_actionPerformed(MyFrame* this, ActionEvent* evt) {
                MyFrame_frameJMenuActionPerformed(this, evt);
        }
#endif
);
        JMenuItem_setText(this->previousFrameJMenuItem, "Previous");
        JMenu_add(this->frameJMenu, this->previousFrameJMenuItem);
        JMenuItem_setText(this->nextFrameJMenuItem, CommonLabels_getInstance()->NEXT);
        JMenu_add(this->frameJMenu, this->nextFrameJMenuItem);
        JMenuItem_setText(this->removeJMenuItem, "Remove");
        JMenu_add(this->frameJMenu, this->removeJMenuItem);
        JMenuItem_setText(this->copyJMenuItem1, "Copy");
        JMenu_add(this->frameJMenu, this->copyJMenuItem1);
        JMenuItem_setText(this->insertAfterJMenuItem, "Ins After");
        JMenu_add(this->frameJMenu, this->insertAfterJMenuItem);
        JMenuItem_setText(this->insertBeforeJMenuItem, "Ins Before");
        JMenu_add(this->frameJMenu, this->insertBeforeJMenuItem);
        JMenuBar_add(this->menuJMenuBar, this->frameJMenu);
        JMenu_setText(this->generateJMenu, "Generate");
        JMenuItem_setText(this->centerJMenuItem, "Center");
        JMenuItem_addActionListener(this->centerJMenuItem, ActionListener_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
            

        void MyFrame_actionPerformed(MyFrame* this, ActionEvent* evt) {
                MyFrame_centerJMenuItemActionPerformed(this, evt);
        }
#endif
);
        JMenu_add(this->generateJMenu, this->centerJMenuItem);
        JMenuItem_setText(this->autoDamageJMenuItem, "Damage");
        JMenu_add(this->generateJMenu, this->autoDamageJMenuItem);
        JMenuItem_setText(this->autoExplodeJMenuItem, "Explode");
        JMenuItem_addMouseListener(this->autoExplodeJMenuItem, MouseAdapter_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
            

        void MyFrame_mousePressed(MyFrame* this, MouseEvent* evt) {
                MyFrame_autoExplodeJMenuItemMousePressed(this, evt);
        }
#endif
);
        JMenu_add(this->generateJMenu, this->autoExplodeJMenuItem);
        JMenuItem_setText(this->autoGrowJMenuItem, "Grow");
        JMenu_add(this->generateJMenu, this->autoGrowJMenuItem);
        JMenuItem_setText(this->jMenuItem1, "Mirror");
        JMenuItem_addActionListener(this->jMenuItem1, ActionListener_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
            

        void MyFrame_actionPerformed(MyFrame* this, ActionEvent* evt) {
                MyFrame_jMenuItem1ActionPerformed(this, evt);
        }
#endif
);
        JMenu_add(this->generateJMenu, this->jMenuItem1);
        JMenuItem_setText(this->autoRotateGenerationJMenuItem, "Rotate");
        JMenuItem_addMouseListener(this->autoRotateGenerationJMenuItem, MouseAdapter_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
            

        void MyFrame_mousePressed(MyFrame* this, MouseEvent* evt) {
                MyFrame_autoRotateGenerationJMenuItemMousePressed(this, evt);
        }
#endif
);
        JMenu_add(this->generateJMenu, this->autoRotateGenerationJMenuItem);
        JMenuItem_setText(this->autoSheildMenuItem, "Shield");
        JMenu_add(this->generateJMenu, this->autoSheildMenuItem);
        JMenuItem_setText(this->autoShrinkJMenuItem, "Shrink");
        JMenu_add(this->generateJMenu, this->autoShrinkJMenuItem);
        JMenuBar_add(this->menuJMenuBar, this->generateJMenu);
        JMenu_setText(this->jMenu1, "Help");
        JMenuBar_add(this->menuJMenuBar, this->jMenu1);
        MyFrame_setJMenuBar(this, this->menuJMenuBar);
        MyFrame_pack(this);
}


static void MyFrame_explodeAllJMenuItemMousePressed(MyFrame* this, MouseEvent* evt) {
        JAVA_TRY {
            MyCanvasEventService_fire(MyCanvasEvent_new(((Any*) MyCanvasEventSource_new(MyCanvasEventService_EXPLODE, nullptr))));
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "explodeAllJMenuItemMousePressed", e);
        } JAVA_END_TRY;
}


static void MyFrame_autoExplodeJMenuItemMousePressed(MyFrame* this, MouseEvent* evt) {
        JAVA_TRY {
            MyCanvasEventService_fire(MyCanvasEvent_new(((Any*) MyCanvasEventSource_new(MyCanvasEventService_AUTOEXPLODE, nullptr))));
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "autoExplodeJMenuItemMousePressed", e);
        } JAVA_END_TRY;
}


static void MyFrame_stopJjButtonMousePressed(MyFrame* this, MouseEvent* evt) {
        JAVA_CALL(MyFrame_getSelectedWorkArea(this), stop);
}


static void MyFrame_playJButtonMousePressed(MyFrame* this, MouseEvent* evt) {
        JAVA_CALL(MyFrame_getSelectedWorkArea(this), play);
}


static void MyFrame_autoRotateGenerationJMenuItemMousePressed(MyFrame* this, MouseEvent* evt) {
        RotateJDialog_setVisible(this->rotateJDialog, true);
}


static void MyFrame_zoomOutJMenuItemMousePressed(MyFrame* this, MouseEvent* evt) {
        JAVA_CALL(MyFrame_getSelectedWorkArea(this), changeZoom, -1);
}


static void MyFrame_zoomInJMenuItemMousePressed(MyFrame* this, MouseEvent* evt) {
        JAVA_CALL(MyFrame_getSelectedWorkArea(this), changeZoom, 1);
}


static void MyFrame_openJMenuItemActionPerformed(MyFrame* this, ActionEvent* evt) {
        MyFrame_openGraphics(this);
}


static void MyFrame_exportJMenuItem1ActionPerformed(MyFrame* this, ActionEvent* evt) {
        MyFrame_export(this);
}


static void MyFrame_saveJMenuItemMousePressed(MyFrame* this, MouseEvent* evt) {
        MyFrame_save(this);
}


static void MyFrame_jTabbedPaneStateChanged(MyFrame* this, ChangeEvent* evt) {
        MyFrame_updateSelectedWorkArea(this);
}


static void MyFrame_frameJMenuActionPerformed(MyFrame* this, ActionEvent* evt) {
}


static void MyFrame_exitJMenuItemActionPerformed(MyFrame* this, ActionEvent* evt) {
        exit(0);
}


static void MyFrame_newJMenuItemActionPerformed(MyFrame* this, ActionEvent* evt) {
        MyFrame_newGraphics(this);
}


static void MyFrame_fileJMenuActionPerformed(MyFrame* this, ActionEvent* evt) {
}


static void MyFrame_exitForm(MyFrame* this, WindowEvent* evt) {
        exit(0);
}


static void MyFrame_openJButtonActionPerformed(MyFrame* this, ActionEvent* evt) {
        MyFrame_openGraphics(this);
}


static void MyFrame_jButton2ActionPerformed(MyFrame* this, ActionEvent* evt) {
        MyFrame_newGraphics(this);
}


static void MyFrame_centerJMenuItemActionPerformed(MyFrame* this, ActionEvent* evt) {
        JAVA_TRY {
            MyCanvasEventService_fire(MyCanvasEvent_new(((Any*) MyCanvasEventSource_new(MyCanvasEventService_CENTER, nullptr))));
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "centerJMenuItemActionPerformed", e);
        } JAVA_END_TRY;
}


static void MyFrame_saveJButtonActionPerformed(MyFrame* this, ActionEvent* evt) {
        MyFrame_save(this);
}


static void MyFrame_jButton1ActionPerformed(MyFrame* this, ActionEvent* evt) {
        MyFrame_export(this);
}


static void MyFrame_jMenuItem1ActionPerformed(MyFrame* this, ActionEvent* evt) {
        JAVA_TRY {
            JAVA_CALL(MyFrame_getSelectedWorkArea(this), autoMirror);
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "centerJMenuItemActionPerformed", e);
        } JAVA_END_TRY;
}


void MyFrame_onFiles(MyFrame* this, File** files) {
        JAVA_TRY {
            LogUtil_putF(this->logUtil, java_concat("Reading: ", java_string_of(files)), this, "onFiles");
            for (int32_t index = 0; index < java_array_length(files); index++) {
                Document* document = DomHelper_createDocument(DomHelper_getInstance(), files[index]);
                WorkAreaJPanel* workAreaJPanel = WorkAreaJPanel_new(WorkAreaDom_new(document), MyFrame_getSize(this));
                WorkAreaJPanel_setLayout(workAreaJPanel, GridLayout_new(1, 1));
                MyFrame_add(this, ((WorkAreaJPanelInterface*) workAreaJPanel));
            }
            FileJDialog_setVisible(this->fileJDialog, false);
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "onFiles", e);
        } JAVA_END_TRY;
}


static void MyFrame_newGraphics(MyFrame* this) {
        JAVA_TRY {
            const char* newName = java_concat("graphic", java_string_of(MyFrame_numberOfWorkAreas));
            Dimension* dim = MyFrame_getSize(this);
            NewWorkAreaJDialog* newDialog = NewWorkAreaJDialog_new(this, false, dim, newName);
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(JFrame_LOGGING, contains, JFrame_LOGGING->MENUEVENT)) {
                GuiLog_put(this->guiLog, this->commonStrings->EXCEPTION, this, "newJMenuItemActionPerformed", e);
            }
        } JAVA_END_TRY;
}


static void MyFrame_openGraphics(MyFrame* this) {
        JAVA_TRY {
            LogUtil_putF(this->logUtil, "Starting", this, "openImageJMenuItemActionPerformed");
            FileJDialog_setVisible(this->fileJDialog, true);
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(JFrame_LOGGING, contains, JFrame_LOGGING->MENUEVENT)) {
                GuiLog_put(this->guiLog, this->commonStrings->EXCEPTION, this, "open", e);
            }
        } JAVA_END_TRY;
}


static void MyFrame_export(MyFrame* this) {
        JAVA_TRY {
            WorkAreaJPanelInterface* workAreaJPanel = ((WorkAreaJPanelInterface*) JTabbedPane_getSelectedComponent(this->jTabbedPane));
            File* file = File_new(java_concat(java_concat(java_concat(MyFrame_SAVE_PATH, "/"), WorkAreaJPanel_getName(workAreaJPanel)), this->JAVAEXTENSION));
            Document* document = WorkAreaJPanel_toDocument(workAreaJPanel);
            LogUtil_putF(this->logUtil, java_concat("Export: ", DomHelper_toString(DomHelper_getInstance(), document)), this, "exportJMenuItem1ActionPerformed");
            XslHelper_export(this->xslHelper, file, java_concat(java_concat(java_string_of(MyFrame_TEMPLATE_EXPORT_PATH), "/"), this->JAVA_TEMPLATE), document);
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(JFrame_LOGGING, contains, JFrame_LOGGING->MENUEVENT)) {
                GuiLog_put(this->guiLog, this->commonStrings->EXCEPTION, this, "export", e);
            }
        } JAVA_END_TRY;
}


static void MyFrame_save(MyFrame* this) {
        JAVA_TRY {
            WorkAreaJPanelInterface* workAreaJPanel = ((WorkAreaJPanelInterface*) JTabbedPane_getSelectedComponent(this->jTabbedPane));
            DomHelper_save(DomHelper_getInstance(), File_new(java_concat(java_concat(java_concat(MyFrame_SAVE_PATH, "/"), WorkAreaJPanel_getName(workAreaJPanel)), this->SAVEEXTENSION)), WorkAreaJPanel_toDocument(workAreaJPanel));
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(JFrame_LOGGING, contains, JFrame_LOGGING->MENUEVENT)) {
                GuiLog_put(this->guiLog, this->commonStrings->EXCEPTION, this, this->commonStrings->SAVE, e);
            }
        } JAVA_END_TRY;
}


// throws Exception
void MyFrame_onHashMap(MyFrame* this, HashMap* hashMap) {
        int32_t angleIncrementInteger = ((int32_t) HashMap_get(hashMap, java_string_of(0)));
        int32_t totalRotationInteger = ((int32_t) HashMap_get(hashMap, java_string_of(1)));
        JAVA_CALL(MyFrame_getSelectedWorkArea(this), autoRotate, Integer_intValue(angleIncrementInteger), Integer_intValue(totalRotationInteger));
}


static WorkAreaJPanelInterface* MyFrame_getSelectedWorkArea(MyFrame* this) {
        return ((WorkAreaJPanelInterface*) JTabbedPane_getSelectedComponent(this->jTabbedPane));
}


void MyFrame_updateSelectedWorkArea(MyFrame* this) {
        int32_t numberOfTabs = JTabbedPane_getTabCount(this->jTabbedPane);
        for (int32_t index = 0; index < numberOfTabs; index++) {
            WorkAreaJPanelInterface* workAreaJPanel = ((WorkAreaJPanelInterface*) JTabbedPane_getComponentAt(this->jTabbedPane, index));
            WorkAreaJPanel_deselect(workAreaJPanel);
        }
        WorkAreaJPanelInterface* workAreaJPanel = ((WorkAreaJPanelInterface*) JTabbedPane_getSelectedComponent(this->jTabbedPane));
        if (workAreaJPanel != nullptr) {
            WorkAreaJPanel_select(workAreaJPanel);
        }
}


// throws Exception
void MyFrame_add(MyFrame* this, WorkAreaJPanelInterface* newCanvasInterface) {
        JAVA_TRY {
            MyFrame_numberOfWorkAreas++;
            if (MyFrame_numberOfWorkAreas == MyFrame_MAXWORKAREAS) {
                java_throw(java_exception_new("Exception", ""));
            }
            JTabbedPane_addTab(this->jTabbedPane, WorkAreaJPanelInterface_getName(newCanvasInterface), ((JPanel*) newCanvasInterface));
            JTabbedPane_setSelectedComponent(this->jTabbedPane, ((JPanel*) newCanvasInterface));
            Thread* animationThread = Thread_new(((Runnable*) newCanvasInterface));
            Thread_start(animationThread);
            MyFrame_updateSelectedWorkArea(this);
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(JFrame_LOGGING, contains, JFrame_LOGGING->GRAPHICSCREATION)) {
                GuiLog_put(this->guiLog, this->commonStrings->EXCEPTION, this, "addNewCanvas", e);
            }
        } JAVA_END_TRY;
}


void MyFrame_keyPressed(MyFrame* this, KeyEvent* keyEvent) {
        JAVA_CALL(MyFrame_getSelectedWorkArea(this), keyPressed, keyEvent);
}


void MyFrame_keyReleased(MyFrame* this, KeyEvent* keyEvent) {
}


void MyFrame_keyTyped(MyFrame* this, KeyEvent* keyEvent) {
}


void MyFrame_main(const char** args) {
        JAVA_TRY {
            AngleFactory_getInstance();
            SmallIntegerSingletonFactory_init(SmallIntegerSingletonFactory_getInstance());
            MyFrame_show(MyFrame_new());
        } JAVA_CATCH(Exception, e) {
            LogUtil* logUtil = LogUtil_getInstance();
            LogUtil_put(logUtil, CommonStrings_getInstance()->EXCEPTION, nullptr, "main", e);
        } JAVA_END_TRY;
}

