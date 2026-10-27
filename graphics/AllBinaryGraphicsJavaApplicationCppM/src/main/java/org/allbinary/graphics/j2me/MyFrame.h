
        /*
                * 
                *  AllBinary Open License Version 1
                *  Copyright (c) 2011 AllBinary
                *  
                *  By agreeing to this license you and any business entity you represent are
                *  legally bound to the AllBinary Open License Version 1 legal agreement.
                *  
                *  You may obtain the AllBinary Open License Version 1 legal agreement from
                *  AllBinary or the root directory of AllBinary's AllBinary Platform repository.
                *  
                *  Created By: Travis Berthelot  
        */
        
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_GRAPHICS_J2ME_MYFRAME_H
        #define ORG_ALLBINARY_GRAPHICS_J2ME_MYFRAME_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/System.h"
        
            #include "java/lang/Integer.h"
        
            #include "java/lang/Thread.h"
        
            #include "java/lang/Runnable.h"
        
#include <java/awt.h>
#include <java/io/File.h>
#include <java/util/HashMap.h>
#include <javax/swing.h>
class XslHelper;
class DomHelper;
class NewWorkAreaJDialog;
class RotateJDialog;
class WorkAreaDom;
class WorkAreaJPanel;
class WorkAreaJPanelInterface;
class MyCanvasEvent;
class MyCanvasEventService;
class MyCanvasEventSource;
class FileJDialog;
#include <org/allbinary/gui/dialog/FileJDialogListenerInterface.h>
#include <org/allbinary/gui/dialog/HashMapJDialogListenerInterface.h>
class LOGGING;
class GuiLog;
class LogUtil;
class SmallIntegerSingletonFactory;
class AngleFactory;
class CommonLabels;
class CommonStrings;
class Document;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/graphics/j2me/JFrame.h"
#include "org/allbinary/graphics/j2me/KeyListener.h"
class Dimension;
class JToolBar;
class JButton;
class JPanel;
class JTabbedPane;
class JLabel;
class JMenuBar;
class JMenu;
class JMenuItem;
class WindowAdapter;
class WindowEvent;
class ActionListener;
class ActionEvent;
class MouseAdapter;
class MouseEvent;
class GridLayout;
class ChangeListener;
class ChangeEvent;
class KeyEvent;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class MyFrame: public javax::swing::JFrame, public FileJDialogListenerInterface, public HashMapJDialogListenerInterface, public java::awt::event::KeyListener {

    private: static inline const int32_t MAXWORKAREAS = 10;

    private: static inline int32_t numberOfWorkAreas = 0;

    private: static inline const std::string PATH = "G:/mnt/bc/mydev/work/graphics/AllBinaryGraphicsJavaApplication";

    private: static const std::string SAVE_PATH;

    private: static const std::string TEMPLATE_EXPORT_PATH;

    public: static void main(std::vector<std::string> args);

    /*protected*/ public: static inline javax::swing::JLabel* statusJLabel;

    /*protected*/ public: LogUtil* logUtil;

    private: CommonStrings* commonStrings;

    private: GuiLog* guiLog;

    private: XslHelper* xslHelper;

    private: const std::string JAVA_TEMPLATE = "svgExport.xsl";

    private: const std::string SAVEEXTENSION = ".gxml";

    private: const std::string JAVAEXTENSION = ".javax";

    private: FileJDialog* fileJDialog;

    private: RotateJDialog* rotateJDialog;

public: MyFrame();

    private: void initComponents();

    private: void explodeAllJMenuItemMousePressed(java::awt::event::MouseEvent* evt);

    private: void autoExplodeJMenuItemMousePressed(java::awt::event::MouseEvent* evt);

    private: void stopJjButtonMousePressed(java::awt::event::MouseEvent* evt);

    private: void playJButtonMousePressed(java::awt::event::MouseEvent* evt);

    private: void autoRotateGenerationJMenuItemMousePressed(java::awt::event::MouseEvent* evt);

    private: void zoomOutJMenuItemMousePressed(java::awt::event::MouseEvent* evt);

    private: void zoomInJMenuItemMousePressed(java::awt::event::MouseEvent* evt);

    private: void openJMenuItemActionPerformed(java::awt::event::ActionEvent* evt);

    private: void exportJMenuItem1ActionPerformed(java::awt::event::ActionEvent* evt);

    private: void saveJMenuItemMousePressed(java::awt::event::MouseEvent* evt);

    private: void jTabbedPaneStateChanged(javax::swing::event::ChangeEvent* evt);

    private: void frameJMenuActionPerformed(java::awt::event::ActionEvent* evt);

    private: void exitJMenuItemActionPerformed(java::awt::event::ActionEvent* evt);

    private: void newJMenuItemActionPerformed(java::awt::event::ActionEvent* evt);

    private: void fileJMenuActionPerformed(java::awt::event::ActionEvent* evt);

    private: void exitForm(java::awt::event::WindowEvent* evt);

    private: void openJButtonActionPerformed(java::awt::event::ActionEvent* evt);

    private: void jButton2ActionPerformed(java::awt::event::ActionEvent* evt);

    private: void centerJMenuItemActionPerformed(java::awt::event::ActionEvent* evt);

    private: void saveJButtonActionPerformed(java::awt::event::ActionEvent* evt);

    private: void jButton1ActionPerformed(java::awt::event::ActionEvent* evt);

    private: void jMenuItem1ActionPerformed(java::awt::event::ActionEvent* evt);

    public: void onFiles(std::vector<File*> files);

    private: void newGraphics();

    private: void openGraphics();

    private: void export_();

    private: void save();

                //@Throws(Exception.constructor)
            
    public: void onHashMap(HashMap<Object*, Object*>* hashMap);

    private: WorkAreaJPanelInterface* getSelectedWorkArea();

    public: void updateSelectedWorkArea();

                //@Throws(Exception.constructor)
            
    public: void add(WorkAreaJPanelInterface* newCanvasInterface);

    public: void keyPressed(java::awt::event::KeyEvent* keyEvent);

    public: void keyReleased(java::awt::event::KeyEvent* keyEvent);

    public: void keyTyped(java::awt::event::KeyEvent* keyEvent);

    private: javax::swing::JButton* animateJButton;

    private: javax::swing::JMenuItem* autoDamageJMenuItem;

    private: javax::swing::JMenuItem* autoExplodeJMenuItem;

    private: javax::swing::JMenuItem* autoGrowJMenuItem;

    private: javax::swing::JMenuItem* autoRotateGenerationJMenuItem;

    private: javax::swing::JMenuItem* autoSheildMenuItem;

    private: javax::swing::JMenuItem* autoShrinkJMenuItem;

    private: javax::swing::JMenuItem* centerJMenuItem;

    private: javax::swing::JMenuItem* copyJMenuItem1;

    private: javax::swing::JMenuItem* exitJMenuItem;

    private: javax::swing::JMenuItem* explodeAllJMenuItem;

    private: javax::swing::JMenuItem* exportJMenuItem1;

    private: javax::swing::JMenu* fileJMenu;

    private: javax::swing::JMenu* frameJMenu;

    private: javax::swing::JMenu* generateJMenu;

    private: javax::swing::JMenuItem* insertAfterJMenuItem;

    private: javax::swing::JMenuItem* insertBeforeJMenuItem;

    private: javax::swing::JButton* jButton1;

    private: javax::swing::JButton* jButton2;

    private: javax::swing::JButton* jButton3;

    private: javax::swing::JButton* jButton4;

    private: javax::swing::JButton* jButton41;

    private: javax::swing::JButton* jButton5;

    private: javax::swing::JMenu* jMenu1;

    private: javax::swing::JMenuItem* jMenuItem1;

    private: javax::swing::JPanel* jPanel1;

    private: javax::swing::JTabbedPane* jTabbedPane;

    private: javax::swing::JToolBar* jToolBar1;

    private: javax::swing::JPanel* mainJPanel;

    private: javax::swing::JMenuBar* menuJMenuBar;

    private: javax::swing::JMenuItem* newJMenuItem;

    private: javax::swing::JMenuItem* nextFrameJMenuItem;

    private: javax::swing::JMenu* objectJMenu;

    private: javax::swing::JButton* openJButton;

    private: javax::swing::JMenuItem* openJMenuItem;

    private: javax::swing::JButton* playJButton;

    private: javax::swing::JMenuItem* previousFrameJMenuItem;

    private: javax::swing::JMenuItem* removeJMenuItem;

    private: javax::swing::JMenuItem* saveAsJMenuItem;

    private: javax::swing::JButton* saveJButton;

    private: javax::swing::JMenuItem* saveJMenuItem;

    private: javax::swing::JPanel* statusJPanel;

    private: javax::swing::JButton* stopJjButton;

    private: javax::swing::JMenu* viewJMenu;

    private: javax::swing::JMenuItem* zoomInJMenuItem;

    private: javax::swing::JMenuItem* zoomOutJMenuItem;

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_J2ME_MYFRAME_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GRAPHICS_J2ME_MYFRAME_H_COMPLETE)
        #define ORG_ALLBINARY_GRAPHICS_J2ME_MYFRAME_H_COMPLETE
        #if __has_include(<java/awt.h>)
#include <java/awt.h>
#endif
#if __has_include(<java/io/File.h>)
#include <java/io/File.h>
#endif
#if __has_include(<java/util/HashMap.h>)
#include <java/util/HashMap.h>
#endif
#if __has_include(<javax/swing.h>)
#include <javax/swing.h>
#endif
#if __has_include(<org/allbinary/data/tree/dom/XslHelper.h>)
#include <org/allbinary/data/tree/dom/XslHelper.h>
#endif
#if __has_include(<org/allbinary/dom/DomHelper.h>)
#include <org/allbinary/dom/DomHelper.h>
#endif
#if __has_include(<org/allbinary/graphics/j2me/dialog/NewWorkAreaJDialog.h>)
#include <org/allbinary/graphics/j2me/dialog/NewWorkAreaJDialog.h>
#endif
#if __has_include(<org/allbinary/graphics/j2me/dialog/RotateJDialog.h>)
#include <org/allbinary/graphics/j2me/dialog/RotateJDialog.h>
#endif
#if __has_include(<org/allbinary/graphics/j2me/workarea/WorkAreaDom.h>)
#include <org/allbinary/graphics/j2me/workarea/WorkAreaDom.h>
#endif
#if __has_include(<org/allbinary/graphics/j2me/workarea/WorkAreaJPanel.h>)
#include <org/allbinary/graphics/j2me/workarea/WorkAreaJPanel.h>
#endif
#if __has_include(<org/allbinary/graphics/j2me/workarea/WorkAreaJPanelInterface.h>)
#include <org/allbinary/graphics/j2me/workarea/WorkAreaJPanelInterface.h>
#endif
#if __has_include(<org/allbinary/graphics/j2me/workarea/canvas/event/MyCanvasEvent.h>)
#include <org/allbinary/graphics/j2me/workarea/canvas/event/MyCanvasEvent.h>
#endif
#if __has_include(<org/allbinary/graphics/j2me/workarea/canvas/event/MyCanvasEventService.h>)
#include <org/allbinary/graphics/j2me/workarea/canvas/event/MyCanvasEventService.h>
#endif
#if __has_include(<org/allbinary/graphics/j2me/workarea/canvas/event/MyCanvasEventSource.h>)
#include <org/allbinary/graphics/j2me/workarea/canvas/event/MyCanvasEventSource.h>
#endif
#if __has_include(<org/allbinary/gui/dialog/FileJDialog.h>)
#include <org/allbinary/gui/dialog/FileJDialog.h>
#endif
#if __has_include(<org/allbinary/gui/dialog/FileJDialogListenerInterface.h>)
#include <org/allbinary/gui/dialog/FileJDialogListenerInterface.h>
#endif
#if __has_include(<org/allbinary/gui/dialog/HashMapJDialogListenerInterface.h>)
#include <org/allbinary/gui/dialog/HashMapJDialogListenerInterface.h>
#endif
#if __has_include(<org/allbinary/log/LOGGING.h>)
#include <org/allbinary/log/LOGGING.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/GuiLog.h>)
#include <org/allbinary/logic/communication/log/GuiLog.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/math/SmallIntegerSingletonFactory.h>)
#include <org/allbinary/logic/math/SmallIntegerSingletonFactory.h>
#endif
#if __has_include(<org/allbinary/math/AngleFactory.h>)
#include <org/allbinary/math/AngleFactory.h>
#endif
#if __has_include(<org/allbinary/string/CommonLabels.h>)
#include <org/allbinary/string/CommonLabels.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include(<org/w3c/dom/Document.h>)
#include <org/w3c/dom/Document.h>
#endif
#if __has_include("org/allbinary/graphics/j2me/JFrame.h")
#include "org/allbinary/graphics/j2me/JFrame.h"
#endif
#if __has_include("org/allbinary/graphics/j2me/KeyListener.h")
#include "org/allbinary/graphics/j2me/KeyListener.h"
#endif
#if __has_include("org/allbinary/graphics/j2me/Dimension.h")
#include "org/allbinary/graphics/j2me/Dimension.h"
#endif
#if __has_include("org/allbinary/graphics/j2me/JToolBar.h")
#include "org/allbinary/graphics/j2me/JToolBar.h"
#endif
#if __has_include("org/allbinary/graphics/j2me/JButton.h")
#include "org/allbinary/graphics/j2me/JButton.h"
#endif
#if __has_include("org/allbinary/graphics/j2me/JPanel.h")
#include "org/allbinary/graphics/j2me/JPanel.h"
#endif
#if __has_include("org/allbinary/graphics/j2me/JTabbedPane.h")
#include "org/allbinary/graphics/j2me/JTabbedPane.h"
#endif
#if __has_include("org/allbinary/graphics/j2me/JLabel.h")
#include "org/allbinary/graphics/j2me/JLabel.h"
#endif
#if __has_include("org/allbinary/graphics/j2me/JMenuBar.h")
#include "org/allbinary/graphics/j2me/JMenuBar.h"
#endif
#if __has_include("org/allbinary/graphics/j2me/JMenu.h")
#include "org/allbinary/graphics/j2me/JMenu.h"
#endif
#if __has_include("org/allbinary/graphics/j2me/JMenuItem.h")
#include "org/allbinary/graphics/j2me/JMenuItem.h"
#endif
#if __has_include("org/allbinary/graphics/j2me/WindowAdapter.h")
#include "org/allbinary/graphics/j2me/WindowAdapter.h"
#endif
#if __has_include("org/allbinary/graphics/j2me/WindowEvent.h")
#include "org/allbinary/graphics/j2me/WindowEvent.h"
#endif
#if __has_include("org/allbinary/graphics/j2me/ActionListener.h")
#include "org/allbinary/graphics/j2me/ActionListener.h"
#endif
#if __has_include("org/allbinary/graphics/j2me/ActionEvent.h")
#include "org/allbinary/graphics/j2me/ActionEvent.h"
#endif
#if __has_include("org/allbinary/graphics/j2me/MouseAdapter.h")
#include "org/allbinary/graphics/j2me/MouseAdapter.h"
#endif
#if __has_include("org/allbinary/graphics/j2me/MouseEvent.h")
#include "org/allbinary/graphics/j2me/MouseEvent.h"
#endif
#if __has_include("org/allbinary/graphics/j2me/GridLayout.h")
#include "org/allbinary/graphics/j2me/GridLayout.h"
#endif
#if __has_include("org/allbinary/graphics/j2me/ChangeListener.h")
#include "org/allbinary/graphics/j2me/ChangeListener.h"
#endif
#if __has_include("org/allbinary/graphics/j2me/ChangeEvent.h")
#include "org/allbinary/graphics/j2me/ChangeEvent.h"
#endif
#if __has_include("org/allbinary/graphics/j2me/KeyEvent.h")
#include "org/allbinary/graphics/j2me/KeyEvent.h"
#endif

        #endif
    
