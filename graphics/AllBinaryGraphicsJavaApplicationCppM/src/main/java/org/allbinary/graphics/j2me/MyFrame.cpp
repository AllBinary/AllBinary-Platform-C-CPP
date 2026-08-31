
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

    public static main(std::vector<string> args){

        try {
            AngleFactory.getInstance();
    
SmallIntegerSingletonFactory.getInstance()!.init();
    
new MyFrame().show();
    

                //: 
} catch(e) 
            {

    logUtil: LogUtil = LogUtil.getInstance()!;;
    
logUtil!.put(CommonStrings.getInstance()!.EXCEPTION, 
                            nullptr, "main", e);
    
}

}


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

public constructor (){

            super();
        this.initComponents();
    
this.setSize(new Dimension(550, 400));
    
this.mainJPanel!.setSize(new Dimension(550, 400));
    
this.jTabbedPane!.setSize(new Dimension(550, 400));
    
this.fileJDialog= new FileJDialog();
    
this.fileJDialog!.addFinishedListener(this);
    
this.rotateJDialog= new RotateJDialog(this, false);
    
}


    initComponents(){
jToolBar1= new javax.swing.JToolBar();
    
this.jButton2= new javax.swing.JButton();
    
this.saveJButton= new javax.swing.JButton();
    
this.jButton1= new javax.swing.JButton();
    
this.openJButton= new javax.swing.JButton();
    
this.jButton3= new javax.swing.JButton();
    
this.jButton4= new javax.swing.JButton();
    
this.jButton41= new javax.swing.JButton();
    
this.jButton5= new javax.swing.JButton();
    
this.animateJButton= new javax.swing.JButton();
    
this.playJButton= new javax.swing.JButton();
    
this.stopJjButton= new javax.swing.JButton();
    
this.jPanel1= new javax.swing.JPanel();
    
this.mainJPanel= new javax.swing.JPanel();
    
this.jTabbedPane= new javax.swing.JTabbedPane();
    
this.statusJPanel= new javax.swing.JPanel();
    
MyFrame.statusJLabel= new javax.swing.JLabel();
    
this.menuJMenuBar= new javax.swing.JMenuBar();
    
this.fileJMenu= new javax.swing.JMenu();
    
this.newJMenuItem= new javax.swing.JMenuItem();
    
this.openJMenuItem= new javax.swing.JMenuItem();
    
this.saveJMenuItem= new javax.swing.JMenuItem();
    
this.saveAsJMenuItem= new javax.swing.JMenuItem();
    
this.exportJMenuItem1= new javax.swing.JMenuItem();
    
this.exitJMenuItem= new javax.swing.JMenuItem();
    
this.viewJMenu= new javax.swing.JMenu();
    
this.zoomInJMenuItem= new javax.swing.JMenuItem();
    
this.zoomOutJMenuItem= new javax.swing.JMenuItem();
    
this.objectJMenu= new javax.swing.JMenu();
    
this.explodeAllJMenuItem= new javax.swing.JMenuItem();
    
this.frameJMenu= new javax.swing.JMenu();
    
this.previousFrameJMenuItem= new javax.swing.JMenuItem();
    
this.nextFrameJMenuItem= new javax.swing.JMenuItem();
    
this.removeJMenuItem= new javax.swing.JMenuItem();
    
this.copyJMenuItem1= new javax.swing.JMenuItem();
    
this.insertAfterJMenuItem= new javax.swing.JMenuItem();
    
this.insertBeforeJMenuItem= new javax.swing.JMenuItem();
    
this.generateJMenu= new javax.swing.JMenu();
    
this.centerJMenuItem= new javax.swing.JMenuItem();
    
this.autoDamageJMenuItem= new javax.swing.JMenuItem();
    
this.autoExplodeJMenuItem= new javax.swing.JMenuItem();
    
this.autoGrowJMenuItem= new javax.swing.JMenuItem();
    
this.jMenuItem1= new javax.swing.JMenuItem();
    
this.autoRotateGenerationJMenuItem= new javax.swing.JMenuItem();
    
this.autoSheildMenuItem= new javax.swing.JMenuItem();
    
this.autoShrinkJMenuItem= new javax.swing.JMenuItem();
    
this.jMenu1= new javax.swing.JMenu();
    
addWindowListener(new class extends java.awt.event.WindowAdapter
                                {
                                
    public windowClosing(java.awt.event.WindowEvent evt){
exitForm(evt);
    
}

                                }
                            );
    
this.jButton2!.setText("New");
    
this.jButton2!.addActionListener(new class extends java.awt.event.ActionListener
                                {
                                
    public actionPerformed(java.awt.event.ActionEvent evt){
jButton2ActionPerformed(evt);
    
}

                                }
                            );
    
this.jToolBar1!.add(this.jButton2);
    
this.saveJButton!.setText("Save");
    
this.saveJButton!.addActionListener(new class extends java.awt.event.ActionListener
                                {
                                
    public actionPerformed(java.awt.event.ActionEvent evt){
saveJButtonActionPerformed(evt);
    
}

                                }
                            );
    
this.jToolBar1!.add(this.saveJButton);
    
this.jButton1!.setText("Export");
    
this.jButton1!.addActionListener(new class extends java.awt.event.ActionListener
                                {
                                
    public actionPerformed(java.awt.event.ActionEvent evt){
jButton1ActionPerformed(evt);
    
}

                                }
                            );
    
this.jToolBar1!.add(this.jButton1);
    
this.openJButton!.setText("Open");
    
this.openJButton!.addActionListener(new class extends java.awt.event.ActionListener
                                {
                                
    public actionPerformed(java.awt.event.ActionEvent evt){
openJButtonActionPerformed(evt);
    
}

                                }
                            );
    
this.jToolBar1!.add(this.openJButton);
    
this.jButton3!.setText("Copy");
    
this.jToolBar1!.add(this.jButton3);
    
this.jButton4!.setText("Insert Before");
    
this.jToolBar1!.add(this.jButton4);
    
this.jButton41!.setText("Insert After");
    
this.jToolBar1!.add(this.jButton41);
    
this.jButton5!.setText("Delete");
    
this.jToolBar1!.add(this.jButton5);
    
this.animateJButton!.setText("AnimateEdit");
    
this.jToolBar1!.add(this.animateJButton);
    
this.playJButton!.setText("Play");
    
this.playJButton!.addMouseListener(new class extends java.awt.event.MouseAdapter
                                {
                                
    public mousePressed(java.awt.event.MouseEvent evt){
playJButtonMousePressed(evt);
    
}

                                }
                            );
    
this.jToolBar1!.add(this.playJButton);
    
this.stopJjButton!.setText("Stop");
    
this.stopJjButton!.addMouseListener(new class extends java.awt.event.MouseAdapter
                                {
                                
    public mousePressed(java.awt.event.MouseEvent evt){
stopJjButtonMousePressed(evt);
    
}

                                }
                            );
    
this.jToolBar1!.add(this.stopJjButton);
    
getContentPane()!.add(this.jToolBar1, java.awt.BorderLayout.NORTH);
    
this.jPanel1!.setLayout(new java.awt.GridLayout(1, 0));
    
this.mainJPanel!.setLayout(new java.awt.GridLayout(1, 0));
    
this.jTabbedPane!.setMinimumSize(new java.awt.Dimension(550, 400));
    
this.jTabbedPane!.addChangeListener(new class extends javax.swing.event.ChangeListener
                                {
                                
    public stateChanged(javax.swing.event.ChangeEvent evt){
jTabbedPaneStateChanged(evt);
    
}

                                }
                            );
    
this.mainJPanel!.add(this.jTabbedPane);
    
this.jPanel1!.add(this.mainJPanel);
    
getContentPane()!.add(this.jPanel1, java.awt.BorderLayout.CENTER);
    
this.statusJPanel!.setLayout(new java.awt.GridLayout(1, 0));
    
MyFrame.statusJLabel!.setText("Status Bar");
    
this.statusJPanel!.add(MyFrame.statusJLabel);
    
getContentPane()!.add(this.statusJPanel, java.awt.BorderLayout.SOUTH);
    
this.fileJMenu!.setText("File");
    
this.fileJMenu!.addActionListener(new class extends java.awt.event.ActionListener
                                {
                                
    public actionPerformed(java.awt.event.ActionEvent evt){
fileJMenuActionPerformed(evt);
    
}

                                }
                            );
    
this.newJMenuItem!.setText("New");
    
this.newJMenuItem!.addActionListener(new class extends java.awt.event.ActionListener
                                {
                                
    public actionPerformed(java.awt.event.ActionEvent evt){
newJMenuItemActionPerformed(evt);
    
}

                                }
                            );
    
this.fileJMenu!.add(this.newJMenuItem);
    
this.openJMenuItem!.setText("Open");
    
this.openJMenuItem!.addActionListener(new class extends java.awt.event.ActionListener
                                {
                                
    public actionPerformed(java.awt.event.ActionEvent evt){
openJMenuItemActionPerformed(evt);
    
}

                                }
                            );
    
this.fileJMenu!.add(this.openJMenuItem);
    
this.saveJMenuItem!.setText("Save");
    
this.saveJMenuItem!.addMouseListener(new class extends java.awt.event.MouseAdapter
                                {
                                
    public mousePressed(java.awt.event.MouseEvent evt){
saveJMenuItemMousePressed(evt);
    
}

                                }
                            );
    
this.fileJMenu!.add(this.saveJMenuItem);
    
this.saveAsJMenuItem!.setText("SaveAs");
    
this.fileJMenu!.add(this.saveAsJMenuItem);
    
this.exportJMenuItem1!.setText("Export");
    
this.exportJMenuItem1!.addActionListener(new class extends java.awt.event.ActionListener
                                {
                                
    public actionPerformed(java.awt.event.ActionEvent evt){
exportJMenuItem1ActionPerformed(evt);
    
}

                                }
                            );
    
this.fileJMenu!.add(this.exportJMenuItem1);
    
this.exitJMenuItem!.setText("Exit");
    
this.exitJMenuItem!.addActionListener(new class extends java.awt.event.ActionListener
                                {
                                
    public actionPerformed(java.awt.event.ActionEvent evt){
exitJMenuItemActionPerformed(evt);
    
}

                                }
                            );
    
this.fileJMenu!.add(this.exitJMenuItem);
    
this.menuJMenuBar!.add(this.fileJMenu);
    
this.viewJMenu!.setText("View");
    
this.zoomInJMenuItem!.setText("Zoom In");
    
this.zoomInJMenuItem!.addMouseListener(new class extends java.awt.event.MouseAdapter
                                {
                                
    public mousePressed(java.awt.event.MouseEvent evt){
zoomInJMenuItemMousePressed(evt);
    
}

                                }
                            );
    
this.viewJMenu!.add(this.zoomInJMenuItem);
    
this.zoomOutJMenuItem!.setText("Zoom Out");
    
this.zoomOutJMenuItem!.addMouseListener(new class extends java.awt.event.MouseAdapter
                                {
                                
    public mousePressed(java.awt.event.MouseEvent evt){
zoomOutJMenuItemMousePressed(evt);
    
}

                                }
                            );
    
this.viewJMenu!.add(this.zoomOutJMenuItem);
    
this.menuJMenuBar!.add(this.viewJMenu);
    
this.objectJMenu!.setText("Objects");
    
this.explodeAllJMenuItem!.setText("Explode All");
    
this.explodeAllJMenuItem!.addMouseListener(new class extends java.awt.event.MouseAdapter
                                {
                                
    public mousePressed(java.awt.event.MouseEvent evt){
explodeAllJMenuItemMousePressed(evt);
    
}

                                }
                            );
    
this.objectJMenu!.add(this.explodeAllJMenuItem);
    
this.menuJMenuBar!.add(this.objectJMenu);
    
this.frameJMenu!.setText("Frame");
    
this.frameJMenu!.addActionListener(new class extends java.awt.event.ActionListener
                                {
                                
    public actionPerformed(java.awt.event.ActionEvent evt){
frameJMenuActionPerformed(evt);
    
}

                                }
                            );
    
this.previousFrameJMenuItem!.setText("Previous");
    
this.frameJMenu!.add(this.previousFrameJMenuItem);
    
this.nextFrameJMenuItem!.setText("Next");
    
this.frameJMenu!.add(this.nextFrameJMenuItem);
    
this.removeJMenuItem!.setText("Remove");
    
this.frameJMenu!.add(this.removeJMenuItem);
    
this.copyJMenuItem1!.setText("Copy");
    
this.frameJMenu!.add(this.copyJMenuItem1);
    
this.insertAfterJMenuItem!.setText("Ins After");
    
this.frameJMenu!.add(this.insertAfterJMenuItem);
    
this.insertBeforeJMenuItem!.setText("Ins Before");
    
this.frameJMenu!.add(this.insertBeforeJMenuItem);
    
this.menuJMenuBar!.add(this.frameJMenu);
    
this.generateJMenu!.setText("Generate");
    
this.centerJMenuItem!.setText("Center");
    
this.centerJMenuItem!.addActionListener(new class extends java.awt.event.ActionListener
                                {
                                
    public actionPerformed(java.awt.event.ActionEvent evt){
centerJMenuItemActionPerformed(evt);
    
}

                                }
                            );
    
this.generateJMenu!.add(this.centerJMenuItem);
    
this.autoDamageJMenuItem!.setText("Damage");
    
this.generateJMenu!.add(this.autoDamageJMenuItem);
    
this.autoExplodeJMenuItem!.setText("Explode");
    
this.autoExplodeJMenuItem!.addMouseListener(new class extends java.awt.event.MouseAdapter
                                {
                                
    public mousePressed(java.awt.event.MouseEvent evt){
autoExplodeJMenuItemMousePressed(evt);
    
}

                                }
                            );
    
this.generateJMenu!.add(this.autoExplodeJMenuItem);
    
this.autoGrowJMenuItem!.setText("Grow");
    
this.generateJMenu!.add(this.autoGrowJMenuItem);
    
this.jMenuItem1!.setText("Mirror");
    
this.jMenuItem1!.addActionListener(new class extends java.awt.event.ActionListener
                                {
                                
    public actionPerformed(java.awt.event.ActionEvent evt){
jMenuItem1ActionPerformed(evt);
    
}

                                }
                            );
    
this.generateJMenu!.add(this.jMenuItem1);
    
this.autoRotateGenerationJMenuItem!.setText("Rotate");
    
this.autoRotateGenerationJMenuItem!.addMouseListener(new class extends java.awt.event.MouseAdapter
                                {
                                
    public mousePressed(java.awt.event.MouseEvent evt){
autoRotateGenerationJMenuItemMousePressed(evt);
    
}

                                }
                            );
    
this.generateJMenu!.add(this.autoRotateGenerationJMenuItem);
    
this.autoSheildMenuItem!.setText("Shield");
    
this.generateJMenu!.add(this.autoSheildMenuItem);
    
this.autoShrinkJMenuItem!.setText("Shrink");
    
this.generateJMenu!.add(this.autoShrinkJMenuItem);
    
this.menuJMenuBar!.add(this.generateJMenu);
    
this.jMenu1!.setText("Help");
    
this.menuJMenuBar!.add(this.jMenu1);
    
setJMenuBar(this.menuJMenuBar);
    
pack();
    
}


    explodeAllJMenuItemMousePressed(java.awt.event.MouseEvent evt){

        try {
            MyCanvasEventService.fire(new MyCanvasEvent(new MyCanvasEventSource(MyCanvasEventService.EXPLODE, 
                            nullptr)));
    

                //: 
} catch(e) 
            {
this.logUtil!.put(this.commonStrings!.EXCEPTION, this, "explodeAllJMenuItemMousePressed", e);
    
}

}


    autoExplodeJMenuItemMousePressed(java.awt.event.MouseEvent evt){

        try {
            MyCanvasEventService.fire(new MyCanvasEvent(new MyCanvasEventSource(MyCanvasEventService.AUTOEXPLODE, 
                            nullptr)));
    

                //: 
} catch(e) 
            {
this.logUtil!.put(this.commonStrings!.EXCEPTION, this, "autoExplodeJMenuItemMousePressed", e);
    
}

}


    stopJjButtonMousePressed(java.awt.event.MouseEvent evt){
this.getSelectedWorkArea()!.stop();
    
}


    playJButtonMousePressed(java.awt.event.MouseEvent evt){
this.getSelectedWorkArea()!.play();
    
}


    autoRotateGenerationJMenuItemMousePressed(java.awt.event.MouseEvent evt){
this.rotateJDialog!.setVisible(true);
    
}


    zoomOutJMenuItemMousePressed(java.awt.event.MouseEvent evt){
this.getSelectedWorkArea()!.changeZoom( -1);
    
}


    zoomInJMenuItemMousePressed(java.awt.event.MouseEvent evt){
this.getSelectedWorkArea()!.changeZoom(1);
    
}


    openJMenuItemActionPerformed(java.awt.event.ActionEvent evt){
this.openGraphics();
    
}


    exportJMenuItem1ActionPerformed(java.awt.event.ActionEvent evt){
this.export();
    
}


    saveJMenuItemMousePressed(java.awt.event.MouseEvent evt){
this.save();
    
}


    jTabbedPaneStateChanged(javax.swing.event.ChangeEvent evt){
this.updateSelectedWorkArea();
    
}


    frameJMenuActionPerformed(java.awt.event.ActionEvent evt){
}


    exitJMenuItemActionPerformed(java.awt.event.ActionEvent evt){
System.exit(0);
    
}


    newJMenuItemActionPerformed(java.awt.event.ActionEvent evt){
this.newGraphics();
    
}


    fileJMenuActionPerformed(java.awt.event.ActionEvent evt){
}


    exitForm(java.awt.event.WindowEvent evt){
System.exit(0);
    
}


    openJButtonActionPerformed(java.awt.event.ActionEvent evt){
this.openGraphics();
    
}


    jButton2ActionPerformed(java.awt.event.ActionEvent evt){
this.newGraphics();
    
}


    centerJMenuItemActionPerformed(java.awt.event.ActionEvent evt){

        try {
            MyCanvasEventService.fire(new MyCanvasEvent(new MyCanvasEventSource(MyCanvasEventService.CENTER, 
                            nullptr)));
    

                //: 
} catch(e) 
            {
this.logUtil!.put(this.commonStrings!.EXCEPTION, this, "centerJMenuItemActionPerformed", e);
    
}

}


    saveJButtonActionPerformed(java.awt.event.ActionEvent evt){
this.save();
    
}


    jButton1ActionPerformed(java.awt.event.ActionEvent evt){
this.export();
    
}


    jMenuItem1ActionPerformed(java.awt.event.ActionEvent evt){

        try {
            this.getSelectedWorkArea()!.autoMirror();
    

                //: 
} catch(e) 
            {
this.logUtil!.put(this.commonStrings!.EXCEPTION, this, "centerJMenuItemActionPerformed", e);
    
}

}


    public onFiles(std::vector<File> files){

        try {
            this.logUtil!.putF("Reading: " +files, this, "onFiles");
    




                        for (
    index: int32_t = 0;index < files.length; index++)
        {

    document: Document = DomHelper.getInstance()!.createDocument(files[index]!)!;;
    

    workAreaJPanel: WorkAreaJPanel = new WorkAreaJPanel(new WorkAreaDom(document), this.getSize());;
    
workAreaJPanel!.setLayout(new GridLayout(1, 1));
    
this.add(workAreaJPanel as WorkAreaJPanelInterface);
    
}

this.fileJDialog!.setVisible(false);
    

                //: 
} catch(e) 
            {
this.logUtil!.put(this.commonStrings!.EXCEPTION, this, "onFiles", e);
    
}

}


    newGraphics(){

        try {
            
    newName: string = "graphic" +MyFrame.numberOfWorkAreas;;
    

    dim: Dimension = this.getSize()!;;
    

    newDialog: NewWorkAreaJDialog = new NewWorkAreaJDialog(this, false, dim, newName);;
    

                //: 
} catch(e) 
            {

                        if(LOGGING.contains(LOGGING.MENUEVENT))
                        
                                    {
                                    this.guiLog!.put(this.commonStrings!.EXCEPTION, this, "newJMenuItemActionPerformed", e);
    

                                    }
                                
}

}


    openGraphics(){

        try {
            this.logUtil!.putF("Starting", this, "openImageJMenuItemActionPerformed");
    
this.fileJDialog!.setVisible(true);
    

                //: 
} catch(e) 
            {

                        if(LOGGING.contains(LOGGING.MENUEVENT))
                        
                                    {
                                    this.guiLog!.put(this.commonStrings!.EXCEPTION, this, "open", e);
    

                                    }
                                
}

}


    export(){

        try {
            
    workAreaJPanel: WorkAreaJPanelInterface = this.jTabbedPane!.getSelectedComponent() as WorkAreaJPanelInterface;;
    

    file: File = new File(this.SAVE_PATH +"/" +workAreaJPanel!.getName() +this.JAVAEXTENSION);;
    

    document: Document = workAreaJPanel!.toDocument()!;;
    
this.logUtil!.putF("Export: " +DomHelper.getInstance()!.toString(document), this, "exportJMenuItem1ActionPerformed");
    
this.xslHelper!.export(file, MyFrame.TEMPLATE_EXPORT_PATH +"/" +this.JAVA_TEMPLATE, document);
    

                //: 
} catch(e) 
            {

                        if(LOGGING.contains(LOGGING.MENUEVENT))
                        
                                    {
                                    this.guiLog!.put(this.commonStrings!.EXCEPTION, this, "export", e);
    

                                    }
                                
}

}


    save(){

        try {
            
    workAreaJPanel: WorkAreaJPanelInterface = this.jTabbedPane!.getSelectedComponent() as WorkAreaJPanelInterface;;
    
DomHelper.getInstance()!.save(new File(this.SAVE_PATH +"/" +workAreaJPanel!.getName() +this.SAVEEXTENSION), workAreaJPanel!.toDocument());
    

                //: 
} catch(e) 
            {

                        if(LOGGING.contains(LOGGING.MENUEVENT))
                        
                                    {
                                    this.guiLog!.put(this.commonStrings!.EXCEPTION, this, this.commonStrings!.SAVE, e);
    

                                    }
                                
}

}


                //@Throws(Exception.constructor)
            
    public onHashMap(HashMap<any, any> hashMap){

    angleIncrementInteger: Integer = hashMap!.get(Integer.valueOf(0)) as Integer;;
    

    totalRotationInteger: Integer = hashMap!.get(Integer.valueOf(1)) as Integer;;
    
this.getSelectedWorkArea()!.autoRotate(angleIncrementInteger!.intValue(), totalRotationInteger!.intValue());
    
}


    WorkAreaJPanelInterface getSelectedWorkArea(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.jTabbedPane!.getSelectedComponent() as WorkAreaJPanelInterface;
    
}


    public updateSelectedWorkArea(){

    numberOfTabs: int32_t = this.jTabbedPane!.getTabCount()!;;
    




                        for (
    index: int32_t = 0;index < numberOfTabs; index++)
        {

    workAreaJPanel: WorkAreaJPanelInterface = this.jTabbedPane!.getComponentAt(index) as WorkAreaJPanelInterface;;
    
workAreaJPanel!.deselect();
    
}


    workAreaJPanel: WorkAreaJPanelInterface = this.jTabbedPane!.getSelectedComponent() as WorkAreaJPanelInterface;;
    

                        if(workAreaJPanel != 
                                    null
                                )
                        
                                    {
                                    workAreaJPanel!.select();
    

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    public add(WorkAreaJPanelInterface newCanvasInterface){

        try {
            this.numberOfWorkAreas++;
    

                        if(this.numberOfWorkAreas == MyFrame.MAXWORKAREAS)
                        
                                    {
                                    


                            throw new Exception();
                    

                                    }
                                
this.jTabbedPane!.addTab(newCanvasInterface!.getName(), newCanvasInterface as JPanel);
    
this.jTabbedPane!.setSelectedComponent(newCanvasInterface as JPanel);
    

    animationThread: Thread = new Thread(newCanvasInterface as Runnable);;
    
animationThread!.start();
    
this.updateSelectedWorkArea();
    

                //: 
} catch(e) 
            {

                        if(LOGGING.contains(LOGGING.GRAPHICSCREATION))
                        
                                    {
                                    this.guiLog!.put(this.commonStrings!.EXCEPTION, this, "addNewCanvas", e);
    

                                    }
                                
}

}


    public keyPressed(java.awt.event.KeyEvent keyEvent){
this.getSelectedWorkArea()!.keyPressed(keyEvent);
    
}


    public keyReleased(java.awt.event.KeyEvent keyEvent){
}


    public keyTyped(java.awt.event.KeyEvent keyEvent){
}


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

            

