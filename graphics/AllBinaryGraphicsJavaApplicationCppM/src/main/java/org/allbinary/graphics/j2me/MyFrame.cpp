
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
        



            #include <vector>
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/System.h"
        
            #include "java/lang/Integer.h"
        
            #include "java/lang/Thread.h"
        
            #include "java/lang/Runnable.h"
        
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

      
#include <org/allbinary/string/CommonLabels.h>

      
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

    public: static void main(std::vector<std::string> args){

        try {
            AngleFactory::getInstance();
    
SmallIntegerSingletonFactory::getInstance().init();
    
MyFrame().show();
    

                //: 
} catch(e) 
            {

    LogUtil logUtil = LogUtil::getInstance();;
    
logUtil.put(CommonStrings::getInstance().EXCEPTION, 
                            nullptr, "main", e);
    
}

}


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

public: MyFrame(){
this->initComponents();
    
this->setSize(Dimension(550, 400));
    
this->mainJPanel.setSize(Dimension(550, 400));
    
this->jTabbedPane.setSize(Dimension(550, 400));
    
this->fileJDialog= FileJDialog();
    
this->fileJDialog.addFinishedListener(this);
    
this->rotateJDialog= RotateJDialog(this, false);
    
}


    private: void initComponents(){
jToolBar1= javax::swing::JToolBar();
    
this->jButton2= javax::swing::JButton();
    
this->saveJButton= javax::swing::JButton();
    
this->jButton1= javax::swing::JButton();
    
this->openJButton= javax::swing::JButton();
    
this->jButton3= javax::swing::JButton();
    
this->jButton4= javax::swing::JButton();
    
this->jButton41= javax::swing::JButton();
    
this->jButton5= javax::swing::JButton();
    
this->animateJButton= javax::swing::JButton();
    
this->playJButton= javax::swing::JButton();
    
this->stopJjButton= javax::swing::JButton();
    
this->jPanel1= javax::swing::JPanel();
    
this->mainJPanel= javax::swing::JPanel();
    
this->jTabbedPane= javax::swing::JTabbedPane();
    
this->statusJPanel= javax::swing::JPanel();
    
MyFrame::statusJLabel= javax::swing::JLabel();
    
this->menuJMenuBar= javax::swing::JMenuBar();
    
this->fileJMenu= javax::swing::JMenu();
    
this->newJMenuItem= javax::swing::JMenuItem();
    
this->openJMenuItem= javax::swing::JMenuItem();
    
this->saveJMenuItem= javax::swing::JMenuItem();
    
this->saveAsJMenuItem= javax::swing::JMenuItem();
    
this->exportJMenuItem1= javax::swing::JMenuItem();
    
this->exitJMenuItem= javax::swing::JMenuItem();
    
this->viewJMenu= javax::swing::JMenu();
    
this->zoomInJMenuItem= javax::swing::JMenuItem();
    
this->zoomOutJMenuItem= javax::swing::JMenuItem();
    
this->objectJMenu= javax::swing::JMenu();
    
this->explodeAllJMenuItem= javax::swing::JMenuItem();
    
this->frameJMenu= javax::swing::JMenu();
    
this->previousFrameJMenuItem= javax::swing::JMenuItem();
    
this->nextFrameJMenuItem= javax::swing::JMenuItem();
    
this->removeJMenuItem= javax::swing::JMenuItem();
    
this->copyJMenuItem1= javax::swing::JMenuItem();
    
this->insertAfterJMenuItem= javax::swing::JMenuItem();
    
this->insertBeforeJMenuItem= javax::swing::JMenuItem();
    
this->generateJMenu= javax::swing::JMenu();
    
this->centerJMenuItem= javax::swing::JMenuItem();
    
this->autoDamageJMenuItem= javax::swing::JMenuItem();
    
this->autoExplodeJMenuItem= javax::swing::JMenuItem();
    
this->autoGrowJMenuItem= javax::swing::JMenuItem();
    
this->jMenuItem1= javax::swing::JMenuItem();
    
this->autoRotateGenerationJMenuItem= javax::swing::JMenuItem();
    
this->autoSheildMenuItem= javax::swing::JMenuItem();
    
this->autoShrinkJMenuItem= javax::swing::JMenuItem();
    
this->jMenu1= javax::swing::JMenu();
    
addWindowListener(class extends java::awt::event::WindowAdapter
                                {
                                
    public: void windowClosing(java::awt::event::WindowEvent evt){
exitForm(evt);
    
}

                                }
                            );
    
this->jButton2.setText("New");
    
this->jButton2.addActionListener(class extends java::awt::event::ActionListener
                                {
                                
    public: void actionPerformed(java::awt::event::ActionEvent evt){
jButton2ActionPerformed(evt);
    
}

                                }
                            );
    
this->jToolBar1.add(this->jButton2);
    
this->saveJButton.setText("Save");
    
this->saveJButton.addActionListener(class extends java::awt::event::ActionListener
                                {
                                
    public: void actionPerformed(java::awt::event::ActionEvent evt){
saveJButtonActionPerformed(evt);
    
}

                                }
                            );
    
this->jToolBar1.add(this->saveJButton);
    
this->jButton1.setText("Export");
    
this->jButton1.addActionListener(class extends java::awt::event::ActionListener
                                {
                                
    public: void actionPerformed(java::awt::event::ActionEvent evt){
jButton1ActionPerformed(evt);
    
}

                                }
                            );
    
this->jToolBar1.add(this->jButton1);
    
this->openJButton.setText("Open");
    
this->openJButton.addActionListener(class extends java::awt::event::ActionListener
                                {
                                
    public: void actionPerformed(java::awt::event::ActionEvent evt){
openJButtonActionPerformed(evt);
    
}

                                }
                            );
    
this->jToolBar1.add(this->openJButton);
    
this->jButton3.setText("Copy");
    
this->jToolBar1.add(this->jButton3);
    
this->jButton4.setText("Insert Before");
    
this->jToolBar1.add(this->jButton4);
    
this->jButton41.setText("Insert After");
    
this->jToolBar1.add(this->jButton41);
    
this->jButton5.setText("Delete");
    
this->jToolBar1.add(this->jButton5);
    
this->animateJButton.setText("AnimateEdit");
    
this->jToolBar1.add(this->animateJButton);
    
this->playJButton.setText("Play");
    
this->playJButton.addMouseListener(class extends java::awt::event::MouseAdapter
                                {
                                
    public: void mousePressed(java::awt::event::MouseEvent evt){
playJButtonMousePressed(evt);
    
}

                                }
                            );
    
this->jToolBar1.add(this->playJButton);
    
this->stopJjButton.setText("Stop");
    
this->stopJjButton.addMouseListener(class extends java::awt::event::MouseAdapter
                                {
                                
    public: void mousePressed(java::awt::event::MouseEvent evt){
stopJjButtonMousePressed(evt);
    
}

                                }
                            );
    
this->jToolBar1.add(this->stopJjButton);
    
getContentPane().add(this->jToolBar1, java.awt.BorderLayout.NORTH);
    
this->jPanel1.setLayout(java::awt::GridLayout(1, 0));
    
this->mainJPanel.setLayout(java::awt::GridLayout(1, 0));
    
this->jTabbedPane.setMinimumSize(java::awt::Dimension(550, 400));
    
this->jTabbedPane.addChangeListener(class extends javax::swing::event::ChangeListener
                                {
                                
    public: void stateChanged(javax::swing::event::ChangeEvent evt){
jTabbedPaneStateChanged(evt);
    
}

                                }
                            );
    
this->mainJPanel.add(this->jTabbedPane);
    
this->jPanel1.add(this->mainJPanel);
    
getContentPane().add(this->jPanel1, java.awt.BorderLayout.CENTER);
    
this->statusJPanel.setLayout(java::awt::GridLayout(1, 0));
    
MyFrame::statusJLabel.setText("Status Bar");
    
this->statusJPanel.add(MyFrame::statusJLabel);
    
getContentPane().add(this->statusJPanel, java.awt.BorderLayout.SOUTH);
    
this->fileJMenu.setText("File");
    
this->fileJMenu.addActionListener(class extends java::awt::event::ActionListener
                                {
                                
    public: void actionPerformed(java::awt::event::ActionEvent evt){
fileJMenuActionPerformed(evt);
    
}

                                }
                            );
    
this->newJMenuItem.setText("New");
    
this->newJMenuItem.addActionListener(class extends java::awt::event::ActionListener
                                {
                                
    public: void actionPerformed(java::awt::event::ActionEvent evt){
newJMenuItemActionPerformed(evt);
    
}

                                }
                            );
    
this->fileJMenu.add(this->newJMenuItem);
    
this->openJMenuItem.setText("Open");
    
this->openJMenuItem.addActionListener(class extends java::awt::event::ActionListener
                                {
                                
    public: void actionPerformed(java::awt::event::ActionEvent evt){
openJMenuItemActionPerformed(evt);
    
}

                                }
                            );
    
this->fileJMenu.add(this->openJMenuItem);
    
this->saveJMenuItem.setText("Save");
    
this->saveJMenuItem.addMouseListener(class extends java::awt::event::MouseAdapter
                                {
                                
    public: void mousePressed(java::awt::event::MouseEvent evt){
saveJMenuItemMousePressed(evt);
    
}

                                }
                            );
    
this->fileJMenu.add(this->saveJMenuItem);
    
this->saveAsJMenuItem.setText("SaveAs");
    
this->fileJMenu.add(this->saveAsJMenuItem);
    
this->exportJMenuItem1.setText("Export");
    
this->exportJMenuItem1.addActionListener(class extends java::awt::event::ActionListener
                                {
                                
    public: void actionPerformed(java::awt::event::ActionEvent evt){
exportJMenuItem1ActionPerformed(evt);
    
}

                                }
                            );
    
this->fileJMenu.add(this->exportJMenuItem1);
    
this->exitJMenuItem.setText("Exit");
    
this->exitJMenuItem.addActionListener(class extends java::awt::event::ActionListener
                                {
                                
    public: void actionPerformed(java::awt::event::ActionEvent evt){
exitJMenuItemActionPerformed(evt);
    
}

                                }
                            );
    
this->fileJMenu.add(this->exitJMenuItem);
    
this->menuJMenuBar.add(this->fileJMenu);
    
this->viewJMenu.setText("View");
    
this->zoomInJMenuItem.setText("Zoom In");
    
this->zoomInJMenuItem.addMouseListener(class extends java::awt::event::MouseAdapter
                                {
                                
    public: void mousePressed(java::awt::event::MouseEvent evt){
zoomInJMenuItemMousePressed(evt);
    
}

                                }
                            );
    
this->viewJMenu.add(this->zoomInJMenuItem);
    
this->zoomOutJMenuItem.setText("Zoom Out");
    
this->zoomOutJMenuItem.addMouseListener(class extends java::awt::event::MouseAdapter
                                {
                                
    public: void mousePressed(java::awt::event::MouseEvent evt){
zoomOutJMenuItemMousePressed(evt);
    
}

                                }
                            );
    
this->viewJMenu.add(this->zoomOutJMenuItem);
    
this->menuJMenuBar.add(this->viewJMenu);
    
this->objectJMenu.setText("Objects");
    
this->explodeAllJMenuItem.setText("Explode All");
    
this->explodeAllJMenuItem.addMouseListener(class extends java::awt::event::MouseAdapter
                                {
                                
    public: void mousePressed(java::awt::event::MouseEvent evt){
explodeAllJMenuItemMousePressed(evt);
    
}

                                }
                            );
    
this->objectJMenu.add(this->explodeAllJMenuItem);
    
this->menuJMenuBar.add(this->objectJMenu);
    
this->frameJMenu.setText("Frame");
    
this->frameJMenu.addActionListener(class extends java::awt::event::ActionListener
                                {
                                
    public: void actionPerformed(java::awt::event::ActionEvent evt){
frameJMenuActionPerformed(evt);
    
}

                                }
                            );
    
this->previousFrameJMenuItem.setText("Previous");
    
this->frameJMenu.add(this->previousFrameJMenuItem);
    
this->nextFrameJMenuItem.setText(CommonLabels::getInstance().NEXT);
    
this->frameJMenu.add(this->nextFrameJMenuItem);
    
this->removeJMenuItem.setText("Remove");
    
this->frameJMenu.add(this->removeJMenuItem);
    
this->copyJMenuItem1.setText("Copy");
    
this->frameJMenu.add(this->copyJMenuItem1);
    
this->insertAfterJMenuItem.setText("Ins After");
    
this->frameJMenu.add(this->insertAfterJMenuItem);
    
this->insertBeforeJMenuItem.setText("Ins Before");
    
this->frameJMenu.add(this->insertBeforeJMenuItem);
    
this->menuJMenuBar.add(this->frameJMenu);
    
this->generateJMenu.setText("Generate");
    
this->centerJMenuItem.setText("Center");
    
this->centerJMenuItem.addActionListener(class extends java::awt::event::ActionListener
                                {
                                
    public: void actionPerformed(java::awt::event::ActionEvent evt){
centerJMenuItemActionPerformed(evt);
    
}

                                }
                            );
    
this->generateJMenu.add(this->centerJMenuItem);
    
this->autoDamageJMenuItem.setText("Damage");
    
this->generateJMenu.add(this->autoDamageJMenuItem);
    
this->autoExplodeJMenuItem.setText("Explode");
    
this->autoExplodeJMenuItem.addMouseListener(class extends java::awt::event::MouseAdapter
                                {
                                
    public: void mousePressed(java::awt::event::MouseEvent evt){
autoExplodeJMenuItemMousePressed(evt);
    
}

                                }
                            );
    
this->generateJMenu.add(this->autoExplodeJMenuItem);
    
this->autoGrowJMenuItem.setText("Grow");
    
this->generateJMenu.add(this->autoGrowJMenuItem);
    
this->jMenuItem1.setText("Mirror");
    
this->jMenuItem1.addActionListener(class extends java::awt::event::ActionListener
                                {
                                
    public: void actionPerformed(java::awt::event::ActionEvent evt){
jMenuItem1ActionPerformed(evt);
    
}

                                }
                            );
    
this->generateJMenu.add(this->jMenuItem1);
    
this->autoRotateGenerationJMenuItem.setText("Rotate");
    
this->autoRotateGenerationJMenuItem.addMouseListener(class extends java::awt::event::MouseAdapter
                                {
                                
    public: void mousePressed(java::awt::event::MouseEvent evt){
autoRotateGenerationJMenuItemMousePressed(evt);
    
}

                                }
                            );
    
this->generateJMenu.add(this->autoRotateGenerationJMenuItem);
    
this->autoSheildMenuItem.setText("Shield");
    
this->generateJMenu.add(this->autoSheildMenuItem);
    
this->autoShrinkJMenuItem.setText("Shrink");
    
this->generateJMenu.add(this->autoShrinkJMenuItem);
    
this->menuJMenuBar.add(this->generateJMenu);
    
this->jMenu1.setText("Help");
    
this->menuJMenuBar.add(this->jMenu1);
    
setJMenuBar(this->menuJMenuBar);
    
pack();
    
}


    private: void explodeAllJMenuItemMousePressed(java::awt::event::MouseEvent evt){

        try {
            MyCanvasEventService::fire(MyCanvasEvent(MyCanvasEventSource(MyCanvasEventService::EXPLODE, 
                            nullptr)));
    

                //: 
} catch(e) 
            {
this->logUtil.put(this->commonStrings.EXCEPTION, this, "explodeAllJMenuItemMousePressed", e);
    
}

}


    private: void autoExplodeJMenuItemMousePressed(java::awt::event::MouseEvent evt){

        try {
            MyCanvasEventService::fire(MyCanvasEvent(MyCanvasEventSource(MyCanvasEventService::AUTOEXPLODE, 
                            nullptr)));
    

                //: 
} catch(e) 
            {
this->logUtil.put(this->commonStrings.EXCEPTION, this, "autoExplodeJMenuItemMousePressed", e);
    
}

}


    private: void stopJjButtonMousePressed(java::awt::event::MouseEvent evt){
this->getSelectedWorkArea().stop();
    
}


    private: void playJButtonMousePressed(java::awt::event::MouseEvent evt){
this->getSelectedWorkArea().play();
    
}


    private: void autoRotateGenerationJMenuItemMousePressed(java::awt::event::MouseEvent evt){
this->rotateJDialog.setVisible(true);
    
}


    private: void zoomOutJMenuItemMousePressed(java::awt::event::MouseEvent evt){
this->getSelectedWorkArea().changeZoom( -1);
    
}


    private: void zoomInJMenuItemMousePressed(java::awt::event::MouseEvent evt){
this->getSelectedWorkArea().changeZoom(1);
    
}


    private: void openJMenuItemActionPerformed(java::awt::event::ActionEvent evt){
this->openGraphics();
    
}


    private: void exportJMenuItem1ActionPerformed(java::awt::event::ActionEvent evt){
this->export();
    
}


    private: void saveJMenuItemMousePressed(java::awt::event::MouseEvent evt){
this->save();
    
}


    private: void jTabbedPaneStateChanged(javax::swing::event::ChangeEvent evt){
this->updateSelectedWorkArea();
    
}


    private: void frameJMenuActionPerformed(java::awt::event::ActionEvent evt){
}


    private: void exitJMenuItemActionPerformed(java::awt::event::ActionEvent evt){
System.exit(0);
    
}


    private: void newJMenuItemActionPerformed(java::awt::event::ActionEvent evt){
this->newGraphics();
    
}


    private: void fileJMenuActionPerformed(java::awt::event::ActionEvent evt){
}


    private: void exitForm(java::awt::event::WindowEvent evt){
System.exit(0);
    
}


    private: void openJButtonActionPerformed(java::awt::event::ActionEvent evt){
this->openGraphics();
    
}


    private: void jButton2ActionPerformed(java::awt::event::ActionEvent evt){
this->newGraphics();
    
}


    private: void centerJMenuItemActionPerformed(java::awt::event::ActionEvent evt){

        try {
            MyCanvasEventService::fire(MyCanvasEvent(MyCanvasEventSource(MyCanvasEventService::CENTER, 
                            nullptr)));
    

                //: 
} catch(e) 
            {
this->logUtil.put(this->commonStrings.EXCEPTION, this, "centerJMenuItemActionPerformed", e);
    
}

}


    private: void saveJButtonActionPerformed(java::awt::event::ActionEvent evt){
this->save();
    
}


    private: void jButton1ActionPerformed(java::awt::event::ActionEvent evt){
this->export();
    
}


    private: void jMenuItem1ActionPerformed(java::awt::event::ActionEvent evt){

        try {
            this->getSelectedWorkArea().autoMirror();
    

                //: 
} catch(e) 
            {
this->logUtil.put(this->commonStrings.EXCEPTION, this, "centerJMenuItemActionPerformed", e);
    
}

}


    public: void onFiles(std::vector<File> files){

        try {
            this->logUtil.putF("Reading: " +files, this, "onFiles");
    




                        for (
    int32_t index = 0;index < files.size(); index++)
        {

    Document document = DomHelper::getInstance().createDocument(files[index]);;
    

    WorkAreaJPanel workAreaJPanel = WorkAreaJPanel(WorkAreaDom(document), this->getSize());;
    
workAreaJPanel.setLayout(GridLayout(1, 1));
    
this->add(workAreaJPanel);
    
}

this->fileJDialog.setVisible(false);
    

                //: 
} catch(e) 
            {
this->logUtil.put(this->commonStrings.EXCEPTION, this, "onFiles", e);
    
}

}


    private: void newGraphics(){

        try {
            
    std::string newName = "graphic" +MyFrame::numberOfWorkAreas;;
    

    Dimension dim = this->getSize();;
    

    NewWorkAreaJDialog newDialog = NewWorkAreaJDialog(this, false, dim, newName);;
    

                //: 
} catch(e) 
            {

                        if(LOGGING::contains(LOGGING::MENUEVENT))
                        
                                    {
                                    this->guiLog.put(this->commonStrings.EXCEPTION, this, "newJMenuItemActionPerformed", e);
    

                                    }
                                
}

}


    private: void openGraphics(){

        try {
            this->logUtil.putF("Starting", this, "openImageJMenuItemActionPerformed");
    
this->fileJDialog.setVisible(true);
    

                //: 
} catch(e) 
            {

                        if(LOGGING::contains(LOGGING::MENUEVENT))
                        
                                    {
                                    this->guiLog.put(this->commonStrings.EXCEPTION, this, "open", e);
    

                                    }
                                
}

}


    private: void export(){

        try {
            
    WorkAreaJPanelInterface workAreaJPanel = this->jTabbedPane.getSelectedComponent();;
    

    File file = File(this->SAVE_PATH +"/" +workAreaJPanel.getName() +this->JAVAEXTENSION);;
    

    Document document = workAreaJPanel.toDocument();;
    
this->logUtil.putF("Export: " +DomHelper::getInstance().toString(document), this, "exportJMenuItem1ActionPerformed");
    
this->xslHelper.export(file, MyFrame::TEMPLATE_EXPORT_PATH +"/" +this->JAVA_TEMPLATE, document);
    

                //: 
} catch(e) 
            {

                        if(LOGGING::contains(LOGGING::MENUEVENT))
                        
                                    {
                                    this->guiLog.put(this->commonStrings.EXCEPTION, this, "export", e);
    

                                    }
                                
}

}


    private: void save(){

        try {
            
    WorkAreaJPanelInterface workAreaJPanel = this->jTabbedPane.getSelectedComponent();;
    
DomHelper::getInstance().save(File(this->SAVE_PATH +"/" +workAreaJPanel.getName() +this->SAVEEXTENSION), workAreaJPanel.toDocument());
    

                //: 
} catch(e) 
            {

                        if(LOGGING::contains(LOGGING::MENUEVENT))
                        
                                    {
                                    this->guiLog.put(this->commonStrings.EXCEPTION, this, this->commonStrings.SAVE, e);
    

                                    }
                                
}

}


                //@Throws(Exception.constructor)
            
    public: void onHashMap(HashMap<Object*, Object*> hashMap){

    Integer angleIncrementInteger = hashMap.get(Integer::valueOf(0));;
    

    Integer totalRotationInteger = hashMap.get(Integer::valueOf(1));;
    
this->getSelectedWorkArea().autoRotate(angleIncrementInteger.intValue(), totalRotationInteger.intValue());
    
}


    private: WorkAreaJPanelInterface getSelectedWorkArea(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->jTabbedPane.getSelectedComponent();
    
}


    public: void updateSelectedWorkArea(){

    int32_t numberOfTabs = this->jTabbedPane.getTabCount();;
    




                        for (
    int32_t index = 0;index < numberOfTabs; index++)
        {

    WorkAreaJPanelInterface workAreaJPanel = this->jTabbedPane.getComponentAt(index);;
    
workAreaJPanel.deselect();
    
}


    WorkAreaJPanelInterface workAreaJPanel = this->jTabbedPane.getSelectedComponent();;
    

                        if(workAreaJPanel != 
                                    nullptr
                                )
                        
                                    {
                                    workAreaJPanel.select();
    

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    public: void add(WorkAreaJPanelInterface newCanvasInterface){

        try {
            this->numberOfWorkAreas++;
    

                        if(this->numberOfWorkAreas == MyFrame::MAXWORKAREAS)
                        
                                    {
                                    


                            throw Exception();
                    

                                    }
                                
this->jTabbedPane.addTab(newCanvasInterface.getName(), newCanvasInterface);
    
this->jTabbedPane.setSelectedComponent(newCanvasInterface);
    

    Thread animationThread = Thread(newCanvasInterface);;
    
animationThread.start();
    
this->updateSelectedWorkArea();
    

                //: 
} catch(e) 
            {

                        if(LOGGING::contains(LOGGING::GRAPHICSCREATION))
                        
                                    {
                                    this->guiLog.put(this->commonStrings.EXCEPTION, this, "addNewCanvas", e);
    

                                    }
                                
}

}


    public: void keyPressed(java::awt::event::KeyEvent keyEvent){
this->getSelectedWorkArea().keyPressed(keyEvent);
    
}


    public: void keyReleased(java::awt::event::KeyEvent keyEvent){
}


    public: void keyTyped(java::awt::event::KeyEvent keyEvent){
}


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

            

