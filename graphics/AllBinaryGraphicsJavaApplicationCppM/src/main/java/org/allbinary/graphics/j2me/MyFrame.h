
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

            #include <vector>
        
            #include "../../../../java/lang/Exception.h"
        
            #include "../../../../java/lang/System.h"
        
            #include "../../../../java/lang/Integer.h"
        
            #include "../../../../java/lang/Thread.h"
        
            #include "../../../../java/lang/Runnable.h"
        
#include <java/awt.h>

      
#include <java/io/File.h>

      
#include <java/util/HashMap.h>

      
#include <javax/swing.h>

      
#include <org/allbinary/data/tree/dom/XslHelper.h>

      
#include <org/allbinary/dom/DomHelper.h>

      
#include <org/allbinary/graphics/j2me/dialog/NewWorkAreaJDialog.h>

      
#include <org/allbinary/graphics/j2me/dialog/RotateJDialog.h>

      
#include <org/allbinary/graphics/j2me/workarea/WorkAreaDom.h>

      
#include <org/allbinary/graphics/j2me/workarea/WorkAreaJPanel.h>

      
#include <org/allbinary/graphics/j2me/workarea/WorkAreaJPanelInterface.h>

      
#include <org/allbinary/graphics/j2me/workarea/canvas/event/MyCanvasEvent.h>

      
#include <org/allbinary/graphics/j2me/workarea/canvas/event/MyCanvasEventService.h>

      
#include <org/allbinary/graphics/j2me/workarea/canvas/event/MyCanvasEventSource.h>

      
#include <org/allbinary/gui/dialog/FileJDialog.h>

      
#include <org/allbinary/gui/dialog/FileJDialogListenerInterface.h>

      
#include <org/allbinary/gui/dialog/HashMapJDialogListenerInterface.h>

      
#include <org/allbinary/log/LOGGING.h>

      
#include <org/allbinary/logic/communication/log/GuiLog.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/math/SmallIntegerSingletonFactory.h>

      
#include <org/allbinary/math/AngleFactory.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/w3c/dom/Document.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "JFrame.h"
#include "KeyListener.h"
#include "Dimension.h"
#include "JToolBar.h"
#include "JButton.h"
#include "JPanel.h"
#include "JTabbedPane.h"
#include "JLabel.h"
#include "JMenuBar.h"
#include "JMenu.h"
#include "JMenuItem.h"
#include "WindowAdapter.h"
#include "WindowEvent.h"
#include "ActionListener.h"
#include "ActionEvent.h"
#include "MouseAdapter.h"
#include "MouseEvent.h"
#include "GridLayout.h"
#include "ChangeListener.h"
#include "ChangeEvent.h"
#include "KeyEvent.h"

class MyFrame: public javax::swing::JFrame, public FileJDialogListenerInterface, public HashMapJDialogListenerInterface, public java::awt::event::KeyListener {

    private: static const int32_t MAXWORKAREAS = 10;

    private: static int32_t numberOfWorkAreas = 0;

    private: static const std::string PATH = "G:/mnt/bc/mydev/work/graphics/AllBinaryGraphicsJavaApplication";

    private: static const std::string SAVE_PATH = MyFrame::PATH +"/save";

    private: static const std::string TEMPLATE_EXPORT_PATH = MyFrame::PATH +"/templates/export";

    public: static void main(std::vector<std::string> args);

    protected: static javax::swing::JLabel statusJLabel;

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: const CommonStrings commonStrings = CommonStrings::getInstance();

    private: const GuiLog guiLog = GuiLog::getInstance();

    private: const XslHelper xslHelper = XslHelper::getInstance();

    private: const std::string JAVA_TEMPLATE = "svgExport.xsl";

    private: const std::string SAVEEXTENSION = ".gxml";

    private: const std::string JAVAEXTENSION = ".javax";

    private: FileJDialog fileJDialog;

    private: RotateJDialog rotateJDialog;

public: MyFrame();

    private: void initComponents();

    private: void explodeAllJMenuItemMousePressed(java::awt::event::MouseEvent evt);

    private: void autoExplodeJMenuItemMousePressed(java::awt::event::MouseEvent evt);

    private: void stopJjButtonMousePressed(java::awt::event::MouseEvent evt);

    private: void playJButtonMousePressed(java::awt::event::MouseEvent evt);

    private: void autoRotateGenerationJMenuItemMousePressed(java::awt::event::MouseEvent evt);

    private: void zoomOutJMenuItemMousePressed(java::awt::event::MouseEvent evt);

    private: void zoomInJMenuItemMousePressed(java::awt::event::MouseEvent evt);

    private: void openJMenuItemActionPerformed(java::awt::event::ActionEvent evt);

    private: void exportJMenuItem1ActionPerformed(java::awt::event::ActionEvent evt);

    private: void saveJMenuItemMousePressed(java::awt::event::MouseEvent evt);

    private: void jTabbedPaneStateChanged(javax::swing::event::ChangeEvent evt);

    private: void frameJMenuActionPerformed(java::awt::event::ActionEvent evt);

    private: void exitJMenuItemActionPerformed(java::awt::event::ActionEvent evt);

    private: void newJMenuItemActionPerformed(java::awt::event::ActionEvent evt);

    private: void fileJMenuActionPerformed(java::awt::event::ActionEvent evt);

    private: void exitForm(java::awt::event::WindowEvent evt);

    private: void openJButtonActionPerformed(java::awt::event::ActionEvent evt);

    private: void jButton2ActionPerformed(java::awt::event::ActionEvent evt);

    private: void centerJMenuItemActionPerformed(java::awt::event::ActionEvent evt);

    private: void saveJButtonActionPerformed(java::awt::event::ActionEvent evt);

    private: void jButton1ActionPerformed(java::awt::event::ActionEvent evt);

    private: void jMenuItem1ActionPerformed(java::awt::event::ActionEvent evt);

    public: void onFiles(std::vector<File> files);

    private: void newGraphics();

    private: void openGraphics();

    private: void export();

    private: void save();

                //@Throws(Exception.constructor)
            
    public: void onHashMap(HashMap<any, any> hashMap);

    private: WorkAreaJPanelInterface getSelectedWorkArea();

    public: void updateSelectedWorkArea();

                //@Throws(Exception.constructor)
            
    public: void add(WorkAreaJPanelInterface newCanvasInterface);

    public: void keyPressed(java::awt::event::KeyEvent keyEvent);

    public: void keyReleased(java::awt::event::KeyEvent keyEvent);

    public: void keyTyped(java::awt::event::KeyEvent keyEvent);

    private: javax::swing::JButton animateJButton;

    private: javax::swing::JMenuItem autoDamageJMenuItem;

    private: javax::swing::JMenuItem autoExplodeJMenuItem;

    private: javax::swing::JMenuItem autoGrowJMenuItem;

    private: javax::swing::JMenuItem autoRotateGenerationJMenuItem;

    private: javax::swing::JMenuItem autoSheildMenuItem;

    private: javax::swing::JMenuItem autoShrinkJMenuItem;

    private: javax::swing::JMenuItem centerJMenuItem;

    private: javax::swing::JMenuItem copyJMenuItem1;

    private: javax::swing::JMenuItem exitJMenuItem;

    private: javax::swing::JMenuItem explodeAllJMenuItem;

    private: javax::swing::JMenuItem exportJMenuItem1;

    private: javax::swing::JMenu fileJMenu;

    private: javax::swing::JMenu frameJMenu;

    private: javax::swing::JMenu generateJMenu;

    private: javax::swing::JMenuItem insertAfterJMenuItem;

    private: javax::swing::JMenuItem insertBeforeJMenuItem;

    private: javax::swing::JButton jButton1;

    private: javax::swing::JButton jButton2;

    private: javax::swing::JButton jButton3;

    private: javax::swing::JButton jButton4;

    private: javax::swing::JButton jButton41;

    private: javax::swing::JButton jButton5;

    private: javax::swing::JMenu jMenu1;

    private: javax::swing::JMenuItem jMenuItem1;

    private: javax::swing::JPanel jPanel1;

    private: javax::swing::JTabbedPane jTabbedPane;

    private: javax::swing::JToolBar jToolBar1;

    private: javax::swing::JPanel mainJPanel;

    private: javax::swing::JMenuBar menuJMenuBar;

    private: javax::swing::JMenuItem newJMenuItem;

    private: javax::swing::JMenuItem nextFrameJMenuItem;

    private: javax::swing::JMenu objectJMenu;

    private: javax::swing::JButton openJButton;

    private: javax::swing::JMenuItem openJMenuItem;

    private: javax::swing::JButton playJButton;

    private: javax::swing::JMenuItem previousFrameJMenuItem;

    private: javax::swing::JMenuItem removeJMenuItem;

    private: javax::swing::JMenuItem saveAsJMenuItem;

    private: javax::swing::JButton saveJButton;

    private: javax::swing::JMenuItem saveJMenuItem;

    private: javax::swing::JPanel statusJPanel;

    private: javax::swing::JButton stopJjButton;

    private: javax::swing::JMenu viewJMenu;

    private: javax::swing::JMenuItem zoomInJMenuItem;

    private: javax::swing::JMenuItem zoomOutJMenuItem;

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_J2ME_MYFRAME_H
