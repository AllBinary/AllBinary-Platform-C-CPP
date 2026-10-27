
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
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/graphics/j2me/workarea/tools/JPanel.h"
#include "org/allbinary/graphics/j2me/workarea/tools/JButton.h"
#include "org/allbinary/graphics/j2me/workarea/tools/JList.h"
#include "org/allbinary/graphics/j2me/workarea/tools/GridLayout.h"
#include "org/allbinary/graphics/j2me/workarea/tools/Font.h"
#include "org/allbinary/graphics/j2me/workarea/tools/LinesGraphicItem.h"
#include "org/allbinary/graphics/j2me/workarea/tools/MouseAdapter.h"
#include "org/allbinary/graphics/j2me/workarea/tools/MouseEvent.h"
#include "org/allbinary/graphics/j2me/workarea/tools/ToolFactory.h"

class ToolJPanel: public javax::swing::JPanel {

public: ToolJPanel(){
this->initComponents();
    
}


    private: void initComponents(){
lineJButton= new javax::swing::JButton();
    
this->rectJButton= new javax::swing::JButton();
    
this->arcJButton= new javax::swing::JButton();
    
this->stringJButton= new javax::swing::JButton();
    
this->charJButton= new javax::swing::JButton();
    
this->roundRectJButton= new javax::swing::JButton();
    
this->imageJButton= new javax::swing::JButton();
    
this->fillArcJButton= new javax::swing::JButton();
    
this->fillRectJButton= new javax::swing::JButton();
    
this->fillRoundRectJButton= new javax::swing::JButton();
    
this->dottedLineJButton= new javax::swing::JButton();
    
this->dottedRectButton= new javax::swing::JButton();
    
this->dottedArcJButton= new javax::swing::JButton();
    
this->dottedFillRectJButton= new javax::swing::JButton();
    
this->dottedFillArcJButton= new javax::swing::JButton();
    
this->dottedFillRountRectJButton= new javax::swing::JButton();
    
this->colorJPanel= new javax::swing::JPanel();
    
this->colorJList= new javax::swing::JList();
    
this->setLayout(new java::awt::GridLayout(17, 1));
    
lineJButton->setFont(new java::awt::Font("Dialog", 0, 10));
    
lineJButton->setText(LinesGraphicItem::getStaticName());
    
lineJButton->addMouseListener(class extends java::awt::event::MouseAdapter
                                {
                                
    public: void mouseClicked(java::awt::event::MouseEvent* evt){
lineJButtonMouseClicked(evt);
    
}

                                }
                            );
    
add(this->lineJButton);
    
this->rectJButton->setFont(new java::awt::Font("Dialog", 0, 10));
    
this->rectJButton->setText("Rect");
    
this->rectJButton->addMouseListener(class extends java::awt::event::MouseAdapter
                                {
                                
    public: void mouseClicked(java::awt::event::MouseEvent* evt){
rectJButtonMouseClicked(evt);
    
}

                                }
                            );
    
add(this->rectJButton);
    
this->arcJButton->setFont(new java::awt::Font("Dialog", 0, 10));
    
this->arcJButton->setText("Arc");
    
this->arcJButton->addMouseListener(class extends java::awt::event::MouseAdapter
                                {
                                
    public: void mousePressed(java::awt::event::MouseEvent* evt){
arcJButtonMousePressed(evt);
    
}

                                }
                            );
    
add(this->arcJButton);
    
this->stringJButton->setFont(new java::awt::Font("Dialog", 0, 10));
    
this->stringJButton->setText("String");
    
this->stringJButton->addMouseListener(class extends java::awt::event::MouseAdapter
                                {
                                
    public: void mousePressed(java::awt::event::MouseEvent* evt){
stringJButtonMousePressed(evt);
    
}

                                }
                            );
    
add(this->stringJButton);
    
this->charJButton->setFont(new java::awt::Font("Dialog", 0, 10));
    
this->charJButton->setText("Char");
    
this->charJButton->addMouseListener(class extends java::awt::event::MouseAdapter
                                {
                                
    public: void mousePressed(java::awt::event::MouseEvent* evt){
charJButtonMousePressed(evt);
    
}

                                }
                            );
    
add(this->charJButton);
    
this->roundRectJButton->setFont(new java::awt::Font("Dialog", 0, 10));
    
this->roundRectJButton->setText("Round Rect");
    
this->roundRectJButton->addMouseListener(class extends java::awt::event::MouseAdapter
                                {
                                
    public: void mousePressed(java::awt::event::MouseEvent* evt){
roundRectJButtonMousePressed(evt);
    
}

                                }
                            );
    
add(this->roundRectJButton);
    
this->imageJButton->setFont(new java::awt::Font("Dialog", 0, 10));
    
this->imageJButton->setText("Image");
    
this->imageJButton->addMouseListener(class extends java::awt::event::MouseAdapter
                                {
                                
    public: void mousePressed(java::awt::event::MouseEvent* evt){
imageJButtonMousePressed(evt);
    
}

                                }
                            );
    
add(this->imageJButton);
    
this->fillArcJButton->setFont(new java::awt::Font("Dialog", 0, 10));
    
this->fillArcJButton->setText("Fill Arc");
    
this->fillArcJButton->addMouseListener(class extends java::awt::event::MouseAdapter
                                {
                                
    public: void mousePressed(java::awt::event::MouseEvent* evt){
fillArcJButtonMousePressed(evt);
    
}

                                }
                            );
    
add(this->fillArcJButton);
    
this->fillRectJButton->setFont(new java::awt::Font("Dialog", 0, 10));
    
this->fillRectJButton->setText("Fill Rect");
    
this->fillRectJButton->addMouseListener(class extends java::awt::event::MouseAdapter
                                {
                                
    public: void mousePressed(java::awt::event::MouseEvent* evt){
fillRectJButtonMousePressed(evt);
    
}

                                }
                            );
    
add(this->fillRectJButton);
    
this->fillRoundRectJButton->setFont(new java::awt::Font("Dialog", 0, 10));
    
this->fillRoundRectJButton->setText("Fill Rnd Rect");
    
this->fillRoundRectJButton->addMouseListener(class extends java::awt::event::MouseAdapter
                                {
                                
    public: void mousePressed(java::awt::event::MouseEvent* evt){
fillRoundRectJButtonMousePressed(evt);
    
}

                                }
                            );
    
add(this->fillRoundRectJButton);
    
this->dottedLineJButton->setFont(new java::awt::Font("Dialog", 0, 10));
    
this->dottedLineJButton->setText("Dot Line");
    
this->dottedLineJButton->addMouseListener(class extends java::awt::event::MouseAdapter
                                {
                                
    public: void mousePressed(java::awt::event::MouseEvent* evt){
dottedLineJButtonMousePressed(evt);
    
}

                                }
                            );
    
add(this->dottedLineJButton);
    
this->dottedRectButton->setFont(new java::awt::Font("Dialog", 0, 10));
    
this->dottedRectButton->setText("Dot Rect");
    
this->dottedRectButton->addMouseListener(class extends java::awt::event::MouseAdapter
                                {
                                
    public: void mousePressed(java::awt::event::MouseEvent* evt){
dottedRectButtonMousePressed(evt);
    
}

                                }
                            );
    
add(this->dottedRectButton);
    
this->dottedArcJButton->setFont(new java::awt::Font("Dialog", 0, 10));
    
this->dottedArcJButton->setText("Dot Arc");
    
this->dottedArcJButton->addMouseListener(class extends java::awt::event::MouseAdapter
                                {
                                
    public: void mousePressed(java::awt::event::MouseEvent* evt){
dottedArcJButtonMousePressed(evt);
    
}

                                }
                            );
    
add(this->dottedArcJButton);
    
this->dottedFillRectJButton->setFont(new java::awt::Font("Dialog", 0, 10));
    
this->dottedFillRectJButton->setText("Dot Fill Rect");
    
this->dottedFillRectJButton->addMouseListener(class extends java::awt::event::MouseAdapter
                                {
                                
    public: void mousePressed(java::awt::event::MouseEvent* evt){
dottedFillRectJButtonMousePressed(evt);
    
}

                                }
                            );
    
add(this->dottedFillRectJButton);
    
this->dottedFillArcJButton->setFont(new java::awt::Font("Dialog", 0, 10));
    
this->dottedFillArcJButton->setText("Dot Fill Arc");
    
this->dottedFillArcJButton->addMouseListener(class extends java::awt::event::MouseAdapter
                                {
                                
    public: void mousePressed(java::awt::event::MouseEvent* evt){
dottedFillArcJButtonMousePressed(evt);
    
}

                                }
                            );
    
add(this->dottedFillArcJButton);
    
this->dottedFillRountRectJButton->setFont(new java::awt::Font("Dialog", 0, 10));
    
this->dottedFillRountRectJButton->setText("Dot Fill Rnd Rect");
    
this->dottedFillRountRectJButton->addMouseListener(class extends java::awt::event::MouseAdapter
                                {
                                
    public: void mousePressed(java::awt::event::MouseEvent* evt){
dottedFillRountRectJButtonMousePressed(evt);
    
}

                                }
                            );
    
add(this->dottedFillRountRectJButton);
    
this->colorJPanel->setLayout(new java::awt::GridLayout(1, 1));
    
this->colorJPanel->add(this->colorJList);
    
add(this->colorJPanel);
    
}


    private: void dottedFillRountRectJButtonMousePressed(java::awt::event::MouseEvent* evt){
ToolFactory::getInstance()->setSelectedTool(this->dottedFillRountRectJButton->getText());
    
}


    private: void dottedFillArcJButtonMousePressed(java::awt::event::MouseEvent* evt){
ToolFactory::getInstance()->setSelectedTool(this->dottedFillArcJButton->getText());
    
}


    private: void dottedFillRectJButtonMousePressed(java::awt::event::MouseEvent* evt){
ToolFactory::getInstance()->setSelectedTool(this->dottedFillRectJButton->getText());
    
}


    private: void dottedArcJButtonMousePressed(java::awt::event::MouseEvent* evt){
ToolFactory::getInstance()->setSelectedTool(this->dottedArcJButton->getText());
    
}


    private: void dottedRectButtonMousePressed(java::awt::event::MouseEvent* evt){
ToolFactory::getInstance()->setSelectedTool(this->dottedRectButton->getText());
    
}


    private: void dottedLineJButtonMousePressed(java::awt::event::MouseEvent* evt){
ToolFactory::getInstance()->setSelectedTool(this->dottedLineJButton->getText());
    
}


    private: void fillRoundRectJButtonMousePressed(java::awt::event::MouseEvent* evt){
ToolFactory::getInstance()->setSelectedTool(this->fillRoundRectJButton->getText());
    
}


    private: void fillRectJButtonMousePressed(java::awt::event::MouseEvent* evt){
ToolFactory::getInstance()->setSelectedTool(this->fillRectJButton->getText());
    
}


    private: void fillArcJButtonMousePressed(java::awt::event::MouseEvent* evt){
ToolFactory::getInstance()->setSelectedTool(this->fillArcJButton->getText());
    
}


    private: void imageJButtonMousePressed(java::awt::event::MouseEvent* evt){
ToolFactory::getInstance()->setSelectedTool(this->imageJButton->getText());
    
}


    private: void roundRectJButtonMousePressed(java::awt::event::MouseEvent* evt){
ToolFactory::getInstance()->setSelectedTool(this->roundRectJButton->getText());
    
}


    private: void charJButtonMousePressed(java::awt::event::MouseEvent* evt){
ToolFactory::getInstance()->setSelectedTool(this->charJButton->getText());
    
}


    private: void stringJButtonMousePressed(java::awt::event::MouseEvent* evt){
ToolFactory::getInstance()->setSelectedTool(this->stringJButton->getText());
    
}


    private: void arcJButtonMousePressed(java::awt::event::MouseEvent* evt){
ToolFactory::getInstance()->setSelectedTool(this->arcJButton->getText());
    
}


    private: void rectJButtonMouseClicked(java::awt::event::MouseEvent* evt){
ToolFactory::getInstance()->setSelectedTool(this->rectJButton->getText());
    
}


    private: void lineJButtonMouseClicked(java::awt::event::MouseEvent* evt){
ToolFactory::getInstance()->setSelectedTool(this->lineJButton->getText());
    
}


    private: javax::swing::JButton* arcJButton;

    private: javax::swing::JButton* charJButton;

    private: javax::swing::JList* colorJList;

    private: javax::swing::JPanel* colorJPanel;

    private: javax::swing::JButton* dottedArcJButton;

    private: javax::swing::JButton* dottedFillArcJButton;

    private: javax::swing::JButton* dottedFillRectJButton;

    private: javax::swing::JButton* dottedFillRountRectJButton;

    private: javax::swing::JButton* dottedLineJButton;

    private: javax::swing::JButton* dottedRectButton;

    private: javax::swing::JButton* fillArcJButton;

    private: javax::swing::JButton* fillRectJButton;

    private: javax::swing::JButton* fillRoundRectJButton;

    private: javax::swing::JButton* imageJButton;

    private: javax::swing::JButton* lineJButton;

    private: javax::swing::JButton* rectJButton;

    private: javax::swing::JButton* roundRectJButton;

    private: javax::swing::JButton* stringJButton;

};

            

