
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

class MyFrame: public javax.swing.JFrame: public FileJDialogListenerInterface, public HashMapJDialogListenerInterface, public java.awt.event.KeyListener {
        

    private: static const MAXWORKAREAS: int32_t = 10;

    private: static numberOfWorkAreas: int32_t = 0;

    private: static const PATH: string = "G:/mnt/bc/mydev/work/graphics/AllBinaryGraphicsJavaApplication";

    private: static const SAVE_PATH: string = MyFrame.PATH +"/save";

    private: static const TEMPLATE_EXPORT_PATH: string = MyFrame.PATH +"/templates/export";

    public static main(std::vector<string> args);

    static statusJLabel: javax.swing.JLabel;

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    private: const guiLog: GuiLog = GuiLog.getInstance()!;

    private: const xslHelper: XslHelper = XslHelper.getInstance()!;

    private: const JAVA_TEMPLATE: string = "svgExport.xsl";

    private: const SAVEEXTENSION: string = ".gxml";

    private: const JAVAEXTENSION: string = ".javax";

    private: fileJDialog: FileJDialog;

    private: rotateJDialog: RotateJDialog;

public constructor ();

    initComponents();

    explodeAllJMenuItemMousePressed(java.awt.event.MouseEvent evt);

    autoExplodeJMenuItemMousePressed(java.awt.event.MouseEvent evt);

    stopJjButtonMousePressed(java.awt.event.MouseEvent evt);

    playJButtonMousePressed(java.awt.event.MouseEvent evt);

    autoRotateGenerationJMenuItemMousePressed(java.awt.event.MouseEvent evt);

    zoomOutJMenuItemMousePressed(java.awt.event.MouseEvent evt);

    zoomInJMenuItemMousePressed(java.awt.event.MouseEvent evt);

    openJMenuItemActionPerformed(java.awt.event.ActionEvent evt);

    exportJMenuItem1ActionPerformed(java.awt.event.ActionEvent evt);

    saveJMenuItemMousePressed(java.awt.event.MouseEvent evt);

    jTabbedPaneStateChanged(javax.swing.event.ChangeEvent evt);

    frameJMenuActionPerformed(java.awt.event.ActionEvent evt);

    exitJMenuItemActionPerformed(java.awt.event.ActionEvent evt);

    newJMenuItemActionPerformed(java.awt.event.ActionEvent evt);

    fileJMenuActionPerformed(java.awt.event.ActionEvent evt);

    exitForm(java.awt.event.WindowEvent evt);

    openJButtonActionPerformed(java.awt.event.ActionEvent evt);

    jButton2ActionPerformed(java.awt.event.ActionEvent evt);

    centerJMenuItemActionPerformed(java.awt.event.ActionEvent evt);

    saveJButtonActionPerformed(java.awt.event.ActionEvent evt);

    jButton1ActionPerformed(java.awt.event.ActionEvent evt);

    jMenuItem1ActionPerformed(java.awt.event.ActionEvent evt);

    public onFiles(std::vector<File> files);

    newGraphics();

    openGraphics();

    export();

    save();

                //@Throws(Exception.constructor)
            
    public onHashMap(HashMap<any, any> hashMap);

    WorkAreaJPanelInterface getSelectedWorkArea();

    public updateSelectedWorkArea();

                //@Throws(Exception.constructor)
            
    public add(WorkAreaJPanelInterface newCanvasInterface);

    public keyPressed(java.awt.event.KeyEvent keyEvent);

    public keyReleased(java.awt.event.KeyEvent keyEvent);

    public keyTyped(java.awt.event.KeyEvent keyEvent);

    private: animateJButton: javax.swing.JButton;

    private: autoDamageJMenuItem: javax.swing.JMenuItem;

    private: autoExplodeJMenuItem: javax.swing.JMenuItem;

    private: autoGrowJMenuItem: javax.swing.JMenuItem;

    private: autoRotateGenerationJMenuItem: javax.swing.JMenuItem;

    private: autoSheildMenuItem: javax.swing.JMenuItem;

    private: autoShrinkJMenuItem: javax.swing.JMenuItem;

    private: centerJMenuItem: javax.swing.JMenuItem;

    private: copyJMenuItem1: javax.swing.JMenuItem;

    private: exitJMenuItem: javax.swing.JMenuItem;

    private: explodeAllJMenuItem: javax.swing.JMenuItem;

    private: exportJMenuItem1: javax.swing.JMenuItem;

    private: fileJMenu: javax.swing.JMenu;

    private: frameJMenu: javax.swing.JMenu;

    private: generateJMenu: javax.swing.JMenu;

    private: insertAfterJMenuItem: javax.swing.JMenuItem;

    private: insertBeforeJMenuItem: javax.swing.JMenuItem;

    private: jButton1: javax.swing.JButton;

    private: jButton2: javax.swing.JButton;

    private: jButton3: javax.swing.JButton;

    private: jButton4: javax.swing.JButton;

    private: jButton41: javax.swing.JButton;

    private: jButton5: javax.swing.JButton;

    private: jMenu1: javax.swing.JMenu;

    private: jMenuItem1: javax.swing.JMenuItem;

    private: jPanel1: javax.swing.JPanel;

    private: jTabbedPane: javax.swing.JTabbedPane;

    private: jToolBar1: javax.swing.JToolBar;

    private: mainJPanel: javax.swing.JPanel;

    private: menuJMenuBar: javax.swing.JMenuBar;

    private: newJMenuItem: javax.swing.JMenuItem;

    private: nextFrameJMenuItem: javax.swing.JMenuItem;

    private: objectJMenu: javax.swing.JMenu;

    private: openJButton: javax.swing.JButton;

    private: openJMenuItem: javax.swing.JMenuItem;

    private: playJButton: javax.swing.JButton;

    private: previousFrameJMenuItem: javax.swing.JMenuItem;

    private: removeJMenuItem: javax.swing.JMenuItem;

    private: saveAsJMenuItem: javax.swing.JMenuItem;

    private: saveJButton: javax.swing.JButton;

    private: saveJMenuItem: javax.swing.JMenuItem;

    private: statusJPanel: javax.swing.JPanel;

    private: stopJjButton: javax.swing.JButton;

    private: viewJMenu: javax.swing.JMenu;

    private: zoomInJMenuItem: javax.swing.JMenuItem;

    private: zoomOutJMenuItem: javax.swing.JMenuItem;

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_J2ME_MYFRAME_H
