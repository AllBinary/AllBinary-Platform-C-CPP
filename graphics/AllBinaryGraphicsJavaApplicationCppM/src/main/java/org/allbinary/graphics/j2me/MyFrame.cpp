
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
        #include "org/allbinary/graphics/j2me/JFrame.h"
#include "org/allbinary/graphics/j2me/KeyListener.h"
#include "org/allbinary/graphics/j2me/Dimension.h"
#include "org/allbinary/graphics/j2me/JToolBar.h"
#include "org/allbinary/graphics/j2me/JButton.h"
#include "org/allbinary/graphics/j2me/JPanel.h"
#include "org/allbinary/graphics/j2me/JTabbedPane.h"
#include "org/allbinary/graphics/j2me/JLabel.h"
#include "org/allbinary/graphics/j2me/JMenuBar.h"
#include "org/allbinary/graphics/j2me/JMenu.h"
#include "org/allbinary/graphics/j2me/JMenuItem.h"
#include "org/allbinary/graphics/j2me/WindowAdapter.h"
#include "org/allbinary/graphics/j2me/WindowEvent.h"
#include "org/allbinary/graphics/j2me/ActionListener.h"
#include "org/allbinary/graphics/j2me/ActionEvent.h"
#include "org/allbinary/graphics/j2me/MouseAdapter.h"
#include "org/allbinary/graphics/j2me/MouseEvent.h"
#include "org/allbinary/graphics/j2me/GridLayout.h"
#include "org/allbinary/graphics/j2me/ChangeListener.h"
#include "org/allbinary/graphics/j2me/ChangeEvent.h"
#include "org/allbinary/graphics/j2me/KeyEvent.h"

class MyFrame: public javax::swing::JFrame, public FileJDialogListenerInterface, public HashMapJDialogListenerInterface, public java::awt::event::KeyListener {

    private: static inline const int32_t MAXWORKAREAS = 10;

    private: static inline int32_t numberOfWorkAreas = 0;

    private: static inline const std::string PATH = "G:/mnt/bc/mydev/work/graphics/AllBinaryGraphicsJavaApplication";

    private: static inline const std::string SAVE_PATH = MyFrame::PATH +"/save";

    private: static inline const std::string TEMPLATE_EXPORT_PATH = MyFrame::PATH +"/templates/export";

    public: static void main(std::vector<std::string> args){

        try {
            AngleFactory::getInstance();
    
SmallIntegerSingletonFactory::getInstance()->init();
    
(new MyFrame())->show();
    

                //: 
} catch(Exception& e) 
            {

    LogUtil* logUtil = LogUtil::getInstance();;
    
logUtil->put(CommonStrings::getInstance()->EXCEPTION, 
                            nullptr, "main", &e);
    
}

}


    protected: static inline javax::swing::JLabel* statusJLabel;

    protected: LogUtil* logUtil = LogUtil::getInstance();

    private: CommonStrings* commonStrings = CommonStrings::getInstance();

    private: GuiLog* guiLog = GuiLog::getInstance();

    private: XslHelper* xslHelper = XslHelper::getInstance();

    private: const std::string JAVA_TEMPLATE = "svgExport.xsl";

    private: const std::string SAVEEXTENSION = ".gxml";

    private: const std::string JAVAEXTENSION = ".javax";

    private: FileJDialog* fileJDialog;

    private: RotateJDialog* rotateJDialog;

public: MyFrame(){
this->initComponents();
    
this->setSize(new Dimension(550, 400));
    
this->mainJPanel->setSize(new Dimension(550, 400));
    
this->jTabbedPane->setSize(new Dimension(550, 400));
    
this->fileJDialog= new FileJDialog();
    
this->fileJDialog->addFinishedListener(this);
    
this->rotateJDialog= new RotateJDialog(this, false);
    
}


    private: void initComponents(){
jToolBar1= new javax::swing::JToolBar();
    
this->jButton2= new javax::swing::JButton();
    
this->saveJButton= new javax::swing::JButton();
    
this->jButton1= new javax::swing::JButton();
    
this->openJButton= new javax::swing::JButton();
    
this->jButton3= new javax::swing::JButton();
    
this->jButton4= new javax::swing::JButton();
    
this->jButton41= new javax::swing::JButton();
    
this->jButton5= new javax::swing::JButton();
    
this->animateJButton= new javax::swing::JButton();
    
this->playJButton= new javax::swing::JButton();
    
this->stopJjButton= new javax::swing::JButton();
    
this->jPanel1= new javax::swing::JPanel();
    
this->mainJPanel= new javax::swing::JPanel();
    
this->jTabbedPane= new javax::swing::JTabbedPane();
    
this->statusJPanel= new javax::swing::JPanel();
    
MyFrame::statusJLabel= new javax::swing::JLabel();
    
this->menuJMenuBar= new javax::swing::JMenuBar();
    
this->fileJMenu= new javax::swing::JMenu();
    
this->newJMenuItem= new javax::swing::JMenuItem();
    
this->openJMenuItem= new javax::swing::JMenuItem();
    
this->saveJMenuItem= new javax::swing::JMenuItem();
    
this->saveAsJMenuItem= new javax::swing::JMenuItem();
    
this->exportJMenuItem1= new javax::swing::JMenuItem();
    
this->exitJMenuItem= new javax::swing::JMenuItem();
    
this->viewJMenu= new javax::swing::JMenu();
    
this->zoomInJMenuItem= new javax::swing::JMenuItem();
    
this->zoomOutJMenuItem= new javax::swing::JMenuItem();
    
this->objectJMenu= new javax::swing::JMenu();
    
this->explodeAllJMenuItem= new javax::swing::JMenuItem();
    
this->frameJMenu= new javax::swing::JMenu();
    
this->previousFrameJMenuItem= new javax::swing::JMenuItem();
    
this->nextFrameJMenuItem= new javax::swing::JMenuItem();
    
this->removeJMenuItem= new javax::swing::JMenuItem();
    
this->copyJMenuItem1= new javax::swing::JMenuItem();
    
this->insertAfterJMenuItem= new javax::swing::JMenuItem();
    
this->insertBeforeJMenuItem= new javax::swing::JMenuItem();
    
this->generateJMenu= new javax::swing::JMenu();
    
this->centerJMenuItem= new javax::swing::JMenuItem();
    
this->autoDamageJMenuItem= new javax::swing::JMenuItem();
    
this->autoExplodeJMenuItem= new javax::swing::JMenuItem();
    
this->autoGrowJMenuItem= new javax::swing::JMenuItem();
    
this->jMenuItem1= new javax::swing::JMenuItem();
    
this->autoRotateGenerationJMenuItem= new javax::swing::JMenuItem();
    
this->autoSheildMenuItem= new javax::swing::JMenuItem();
    
this->autoShrinkJMenuItem= new javax::swing::JMenuItem();
    
this->jMenu1= new javax::swing::JMenu();
    
addWindowListener(class extends java::awt::event::WindowAdapter
                                {
                                
    public: void windowClosing(java::awt::event::WindowEvent* evt){
exitForm(evt);
    
}

                                }
                            );
    
this->jButton2->setText("New");
    
this->jButton2->addActionListener(class extends java::awt::event::ActionListener
                                {
                                
    public: void actionPerformed(java::awt::event::ActionEvent* evt){
jButton2ActionPerformed(evt);
    
}

                                }
                            );
    
this->jToolBar1->add(this->jButton2);
    
this->saveJButton->setText("Save");
    
this->saveJButton->addActionListener(class extends java::awt::event::ActionListener
                                {
                                
    public: void actionPerformed(java::awt::event::ActionEvent* evt){
saveJButtonActionPerformed(evt);
    
}

                                }
                            );
    
this->jToolBar1->add(this->saveJButton);
    
this->jButton1->setText("Export");
    
this->jButton1->addActionListener(class extends java::awt::event::ActionListener
                                {
                                
    public: void actionPerformed(java::awt::event::ActionEvent* evt){
jButton1ActionPerformed(evt);
    
}

                                }
                            );
    
this->jToolBar1->add(this->jButton1);
    
this->openJButton->setText("Open");
    
this->openJButton->addActionListener(class extends java::awt::event::ActionListener
                                {
                                
    public: void actionPerformed(java::awt::event::ActionEvent* evt){
openJButtonActionPerformed(evt);
    
}

                                }
                            );
    
this->jToolBar1->add(this->openJButton);
    
this->jButton3->setText("Copy");
    
this->jToolBar1->add(this->jButton3);
    
this->jButton4->setText("Insert Before");
    
this->jToolBar1->add(this->jButton4);
    
this->jButton41->setText("Insert After");
    
this->jToolBar1->add(this->jButton41);
    
this->jButton5->setText("Delete");
    
this->jToolBar1->add(this->jButton5);
    
this->animateJButton->setText("AnimateEdit");
    
this->jToolBar1->add(this->animateJButton);
    
this->playJButton->setText("Play");
    
this->playJButton->addMouseListener(class extends java::awt::event::MouseAdapter
                                {
                                
    public: void mousePressed(java::awt::event::MouseEvent* evt){
playJButtonMousePressed(evt);
    
}

                                }
                            );
    
this->jToolBar1->add(this->playJButton);
    
this->stopJjButton->setText("Stop");
    
this->stopJjButton->addMouseListener(class extends java::awt::event::MouseAdapter
                                {
                                
    public: void mousePressed(java::awt::event::MouseEvent* evt){
stopJjButtonMousePressed(evt);
    
}

                                }
                            );
    
this->jToolBar1->add(this->stopJjButton);
    
getContentPane()->add(this->jToolBar1, java.awt.BorderLayout.NORTH);
    
this->jPanel1->setLayout(new java::awt::GridLayout(1, 0));
    
this->mainJPanel->setLayout(new java::awt::GridLayout(1, 0));
    
this->jTabbedPane->setMinimumSize(new java::awt::Dimension(550, 400));
    
this->jTabbedPane->addChangeListener(class extends javax::swing::event::ChangeListener
                                {
                                
    public: void stateChanged(javax::swing::event::ChangeEvent* evt){
jTabbedPaneStateChanged(evt);
    
}

                                }
                            );
    
this->mainJPanel->add(this->jTabbedPane);
    
this->jPanel1->add(this->mainJPanel);
    
getContentPane()->add(this->jPanel1, java.awt.BorderLayout.CENTER);
    
this->statusJPanel->setLayout(new java::awt::GridLayout(1, 0));
    
MyFrame::statusJLabel->setText("Status Bar");
    
this->statusJPanel->add(MyFrame::statusJLabel);
    
getContentPane()->add(this->statusJPanel, java.awt.BorderLayout.SOUTH);
    
this->fileJMenu->setText("File");
    
this->fileJMenu->addActionListener(class extends java::awt::event::ActionListener
                                {
                                
    public: void actionPerformed(java::awt::event::ActionEvent* evt){
fileJMenuActionPerformed(evt);
    
}

                                }
                            );
    
this->newJMenuItem->setText("New");
    
this->newJMenuItem->addActionListener(class extends java::awt::event::ActionListener
                                {
                                
    public: void actionPerformed(java::awt::event::ActionEvent* evt){
newJMenuItemActionPerformed(evt);
    
}

                                }
                            );
    
this->fileJMenu->add(this->newJMenuItem);
    
this->openJMenuItem->setText("Open");
    
this->openJMenuItem->addActionListener(class extends java::awt::event::ActionListener
                                {
                                
    public: void actionPerformed(java::awt::event::ActionEvent* evt){
openJMenuItemActionPerformed(evt);
    
}

                                }
                            );
    
this->fileJMenu->add(this->openJMenuItem);
    
this->saveJMenuItem->setText("Save");
    
this->saveJMenuItem->addMouseListener(class extends java::awt::event::MouseAdapter
                                {
                                
    public: void mousePressed(java::awt::event::MouseEvent* evt){
saveJMenuItemMousePressed(evt);
    
}

                                }
                            );
    
this->fileJMenu->add(this->saveJMenuItem);
    
this->saveAsJMenuItem->setText("SaveAs");
    
this->fileJMenu->add(this->saveAsJMenuItem);
    
this->exportJMenuItem1->setText("Export");
    
this->exportJMenuItem1->addActionListener(class extends java::awt::event::ActionListener
                                {
                                
    public: void actionPerformed(java::awt::event::ActionEvent* evt){
exportJMenuItem1ActionPerformed(evt);
    
}

                                }
                            );
    
this->fileJMenu->add(this->exportJMenuItem1);
    
this->exitJMenuItem->setText("Exit");
    
this->exitJMenuItem->addActionListener(class extends java::awt::event::ActionListener
                                {
                                
    public: void actionPerformed(java::awt::event::ActionEvent* evt){
exitJMenuItemActionPerformed(evt);
    
}

                                }
                            );
    
this->fileJMenu->add(this->exitJMenuItem);
    
this->menuJMenuBar->add(this->fileJMenu);
    
this->viewJMenu->setText("View");
    
this->zoomInJMenuItem->setText("Zoom In");
    
this->zoomInJMenuItem->addMouseListener(class extends java::awt::event::MouseAdapter
                                {
                                
    public: void mousePressed(java::awt::event::MouseEvent* evt){
zoomInJMenuItemMousePressed(evt);
    
}

                                }
                            );
    
this->viewJMenu->add(this->zoomInJMenuItem);
    
this->zoomOutJMenuItem->setText("Zoom Out");
    
this->zoomOutJMenuItem->addMouseListener(class extends java::awt::event::MouseAdapter
                                {
                                
    public: void mousePressed(java::awt::event::MouseEvent* evt){
zoomOutJMenuItemMousePressed(evt);
    
}

                                }
                            );
    
this->viewJMenu->add(this->zoomOutJMenuItem);
    
this->menuJMenuBar->add(this->viewJMenu);
    
this->objectJMenu->setText("Objects");
    
this->explodeAllJMenuItem->setText("Explode All");
    
this->explodeAllJMenuItem->addMouseListener(class extends java::awt::event::MouseAdapter
                                {
                                
    public: void mousePressed(java::awt::event::MouseEvent* evt){
explodeAllJMenuItemMousePressed(evt);
    
}

                                }
                            );
    
this->objectJMenu->add(this->explodeAllJMenuItem);
    
this->menuJMenuBar->add(this->objectJMenu);
    
this->frameJMenu->setText("Frame");
    
this->frameJMenu->addActionListener(class extends java::awt::event::ActionListener
                                {
                                
    public: void actionPerformed(java::awt::event::ActionEvent* evt){
frameJMenuActionPerformed(evt);
    
}

                                }
                            );
    
this->previousFrameJMenuItem->setText("Previous");
    
this->frameJMenu->add(this->previousFrameJMenuItem);
    
this->nextFrameJMenuItem->setText(CommonLabels::getInstance()->NEXT);
    
this->frameJMenu->add(this->nextFrameJMenuItem);
    
this->removeJMenuItem->setText("Remove");
    
this->frameJMenu->add(this->removeJMenuItem);
    
this->copyJMenuItem1->setText("Copy");
    
this->frameJMenu->add(this->copyJMenuItem1);
    
this->insertAfterJMenuItem->setText("Ins After");
    
this->frameJMenu->add(this->insertAfterJMenuItem);
    
this->insertBeforeJMenuItem->setText("Ins Before");
    
this->frameJMenu->add(this->insertBeforeJMenuItem);
    
this->menuJMenuBar->add(this->frameJMenu);
    
this->generateJMenu->setText("Generate");
    
this->centerJMenuItem->setText("Center");
    
this->centerJMenuItem->addActionListener(class extends java::awt::event::ActionListener
                                {
                                
    public: void actionPerformed(java::awt::event::ActionEvent* evt){
centerJMenuItemActionPerformed(evt);
    
}

                                }
                            );
    
this->generateJMenu->add(this->centerJMenuItem);
    
this->autoDamageJMenuItem->setText("Damage");
    
this->generateJMenu->add(this->autoDamageJMenuItem);
    
this->autoExplodeJMenuItem->setText("Explode");
    
this->autoExplodeJMenuItem->addMouseListener(class extends java::awt::event::MouseAdapter
                                {
                                
    public: void mousePressed(java::awt::event::MouseEvent* evt){
autoExplodeJMenuItemMousePressed(evt);
    
}

                                }
                            );
    
this->generateJMenu->add(this->autoExplodeJMenuItem);
    
this->autoGrowJMenuItem->setText("Grow");
    
this->generateJMenu->add(this->autoGrowJMenuItem);
    
this->jMenuItem1->setText("Mirror");
    
this->jMenuItem1->addActionListener(class extends java::awt::event::ActionListener
                                {
                                
    public: void actionPerformed(java::awt::event::ActionEvent* evt){
jMenuItem1ActionPerformed(evt);
    
}

                                }
                            );
    
this->generateJMenu->add(this->jMenuItem1);
    
this->autoRotateGenerationJMenuItem->setText("Rotate");
    
this->autoRotateGenerationJMenuItem->addMouseListener(class extends java::awt::event::MouseAdapter
                                {
                                
    public: void mousePressed(java::awt::event::MouseEvent* evt){
autoRotateGenerationJMenuItemMousePressed(evt);
    
}

                                }
                            );
    
this->generateJMenu->add(this->autoRotateGenerationJMenuItem);
    
this->autoSheildMenuItem->setText("Shield");
    
this->generateJMenu->add(this->autoSheildMenuItem);
    
this->autoShrinkJMenuItem->setText("Shrink");
    
this->generateJMenu->add(this->autoShrinkJMenuItem);
    
this->menuJMenuBar->add(this->generateJMenu);
    
this->jMenu1->setText("Help");
    
this->menuJMenuBar->add(this->jMenu1);
    
setJMenuBar(this->menuJMenuBar);
    
pack();
    
}


    private: void explodeAllJMenuItemMousePressed(java::awt::event::MouseEvent* evt){

        try {
            MyCanvasEventService::fire(new MyCanvasEvent(new MyCanvasEventSource(MyCanvasEventService::EXPLODE, 
                            nullptr)));
    

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, "explodeAllJMenuItemMousePressed", &e);
    
}

}


    private: void autoExplodeJMenuItemMousePressed(java::awt::event::MouseEvent* evt){

        try {
            MyCanvasEventService::fire(new MyCanvasEvent(new MyCanvasEventSource(MyCanvasEventService::AUTOEXPLODE, 
                            nullptr)));
    

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, "autoExplodeJMenuItemMousePressed", &e);
    
}

}


    private: void stopJjButtonMousePressed(java::awt::event::MouseEvent* evt){
this->getSelectedWorkArea()->stop();
    
}


    private: void playJButtonMousePressed(java::awt::event::MouseEvent* evt){
this->getSelectedWorkArea()->play();
    
}


    private: void autoRotateGenerationJMenuItemMousePressed(java::awt::event::MouseEvent* evt){
this->rotateJDialog->setVisible(true);
    
}


    private: void zoomOutJMenuItemMousePressed(java::awt::event::MouseEvent* evt){
this->getSelectedWorkArea()->changeZoom( -1);
    
}


    private: void zoomInJMenuItemMousePressed(java::awt::event::MouseEvent* evt){
this->getSelectedWorkArea()->changeZoom(1);
    
}


    private: void openJMenuItemActionPerformed(java::awt::event::ActionEvent* evt){
this->openGraphics();
    
}


    private: void exportJMenuItem1ActionPerformed(java::awt::event::ActionEvent* evt){
this->export();
    
}


    private: void saveJMenuItemMousePressed(java::awt::event::MouseEvent* evt){
this->save();
    
}


    private: void jTabbedPaneStateChanged(javax::swing::event::ChangeEvent* evt){
this->updateSelectedWorkArea();
    
}


    private: void frameJMenuActionPerformed(java::awt::event::ActionEvent* evt){
}


    private: void exitJMenuItemActionPerformed(java::awt::event::ActionEvent* evt){
System.exit(0);
    
}


    private: void newJMenuItemActionPerformed(java::awt::event::ActionEvent* evt){
this->newGraphics();
    
}


    private: void fileJMenuActionPerformed(java::awt::event::ActionEvent* evt){
}


    private: void exitForm(java::awt::event::WindowEvent* evt){
System.exit(0);
    
}


    private: void openJButtonActionPerformed(java::awt::event::ActionEvent* evt){
this->openGraphics();
    
}


    private: void jButton2ActionPerformed(java::awt::event::ActionEvent* evt){
this->newGraphics();
    
}


    private: void centerJMenuItemActionPerformed(java::awt::event::ActionEvent* evt){

        try {
            MyCanvasEventService::fire(new MyCanvasEvent(new MyCanvasEventSource(MyCanvasEventService::CENTER, 
                            nullptr)));
    

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, "centerJMenuItemActionPerformed", &e);
    
}

}


    private: void saveJButtonActionPerformed(java::awt::event::ActionEvent* evt){
this->save();
    
}


    private: void jButton1ActionPerformed(java::awt::event::ActionEvent* evt){
this->export();
    
}


    private: void jMenuItem1ActionPerformed(java::awt::event::ActionEvent* evt){

        try {
            this->getSelectedWorkArea()->autoMirror();
    

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, "centerJMenuItemActionPerformed", &e);
    
}

}


    public: void onFiles(std::vector<File*> files){

        try {
            this->logUtil->putF("Reading: " +files, this, "onFiles");
    




                        for (
    int32_t index = 0;index < files.size(); index++)
        {

    Document* document = DomHelper::getInstance()->createDocument(files[index]);;
    

    WorkAreaJPanel* workAreaJPanel = new WorkAreaJPanel(new WorkAreaDom(document), this->getSize());;
    
workAreaJPanel->setLayout(new GridLayout(1, 1));
    
this->add(dynamic_cast<WorkAreaJPanelInterface*>(workAreaJPanel));
    
}

this->fileJDialog->setVisible(false);
    

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, "onFiles", &e);
    
}

}


    private: void newGraphics(){

        try {
            
    std::string newName = "graphic" +MyFrame::numberOfWorkAreas;;
    

    Dimension* dim = this->getSize();;
    

    NewWorkAreaJDialog* newDialog = new NewWorkAreaJDialog(this, false, dim, newName);;
    

                //: 
} catch(Exception& e) 
            {

                        if(LOGGING::contains(LOGGING::MENUEVENT))
                        
                                    {
                                    this->guiLog->put(this->commonStrings->EXCEPTION, this, "newJMenuItemActionPerformed", &e);
    

                                    }
                                
}

}


    private: void openGraphics(){

        try {
            this->logUtil->putF("Starting", this, "openImageJMenuItemActionPerformed");
    
this->fileJDialog->setVisible(true);
    

                //: 
} catch(Exception& e) 
            {

                        if(LOGGING::contains(LOGGING::MENUEVENT))
                        
                                    {
                                    this->guiLog->put(this->commonStrings->EXCEPTION, this, "open", &e);
    

                                    }
                                
}

}


    private: void export_(){

        try {
            
    WorkAreaJPanelInterface* workAreaJPanel = dynamic_cast<WorkAreaJPanelInterface*>(this->jTabbedPane->getSelectedComponent());;
    

    File* file = new File(this->SAVE_PATH +"/" +workAreaJPanel->getName() +this->JAVAEXTENSION);;
    

    Document* document = workAreaJPanel->toDocument();;
    
this->logUtil->putF("Export: " +DomHelper::getInstance()->toString(document), this, "exportJMenuItem1ActionPerformed");
    
this->xslHelper->export(file, MyFrame::TEMPLATE_EXPORT_PATH +"/" +this->JAVA_TEMPLATE, document);
    

                //: 
} catch(Exception& e) 
            {

                        if(LOGGING::contains(LOGGING::MENUEVENT))
                        
                                    {
                                    this->guiLog->put(this->commonStrings->EXCEPTION, this, "export", &e);
    

                                    }
                                
}

}


    private: void save(){

        try {
            
    WorkAreaJPanelInterface* workAreaJPanel = dynamic_cast<WorkAreaJPanelInterface*>(this->jTabbedPane->getSelectedComponent());;
    
DomHelper::getInstance()->save(new File(this->SAVE_PATH +"/" +workAreaJPanel->getName() +this->SAVEEXTENSION), workAreaJPanel->toDocument());
    

                //: 
} catch(Exception& e) 
            {

                        if(LOGGING::contains(LOGGING::MENUEVENT))
                        
                                    {
                                    this->guiLog->put(this->commonStrings->EXCEPTION, this, this->commonStrings->SAVE, &e);
    

                                    }
                                
}

}


                //@Throws(Exception.constructor)
            
    public: void onHashMap(HashMap<Object*, Object*>* hashMap){

    int32_t angleIncrementInteger = hashMap->get(Integer.valueOf(0));;
    

    int32_t totalRotationInteger = hashMap->get(Integer.valueOf(1));;
    
this->getSelectedWorkArea()->autoRotate(angleIncrementInteger.intValue(), totalRotationInteger.intValue());
    
}


    private: WorkAreaJPanelInterface* getSelectedWorkArea(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return dynamic_cast<WorkAreaJPanelInterface*>(this->jTabbedPane->getSelectedComponent());
    
}


    public: void updateSelectedWorkArea(){

    int32_t numberOfTabs = this->jTabbedPane->getTabCount();;
    




                        for (
    int32_t index = 0;index < numberOfTabs; index++)
        {

    WorkAreaJPanelInterface* workAreaJPanel = dynamic_cast<WorkAreaJPanelInterface*>(this->jTabbedPane->getComponentAt(index));;
    
workAreaJPanel->deselect();
    
}


    WorkAreaJPanelInterface* workAreaJPanel = dynamic_cast<WorkAreaJPanelInterface*>(this->jTabbedPane->getSelectedComponent());;
    

                        if(workAreaJPanel != 
                                    nullptr
                                )
                        
                                    {
                                    workAreaJPanel->select();
    

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    public: void add(WorkAreaJPanelInterface* newCanvasInterface){

        try {
            this->numberOfWorkAreas++;
    

                        if(this->numberOfWorkAreas == MyFrame::MAXWORKAREAS)
                        
                                    {
                                    


                            throw new Exception();
                    

                                    }
                                
this->jTabbedPane->addTab(newCanvasInterface->getName(), dynamic_cast<JPanel*>(newCanvasInterface));
    
this->jTabbedPane->setSelectedComponent(dynamic_cast<JPanel*>(newCanvasInterface));
    

    Thread* animationThread = new Thread(dynamic_cast<Runnable*>(newCanvasInterface));;
    
animationThread->start();
    
this->updateSelectedWorkArea();
    

                //: 
} catch(Exception& e) 
            {

                        if(LOGGING::contains(LOGGING::GRAPHICSCREATION))
                        
                                    {
                                    this->guiLog->put(this->commonStrings->EXCEPTION, this, "addNewCanvas", &e);
    

                                    }
                                
}

}


    public: void keyPressed(java::awt::event::KeyEvent* keyEvent){
this->getSelectedWorkArea()->keyPressed(keyEvent);
    
}


    public: void keyReleased(java::awt::event::KeyEvent* keyEvent){
}


    public: void keyTyped(java::awt::event::KeyEvent* keyEvent){
}


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

            

