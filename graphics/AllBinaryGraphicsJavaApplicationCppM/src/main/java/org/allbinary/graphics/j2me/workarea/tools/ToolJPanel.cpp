
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
        



















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "JPanel.h"
#include "JButton.h"
#include "JList.h"
#include "GridLayout.h"
#include "Font.h"
#include "LinesGraphicItem.h"
#include "MouseAdapter.h"
#include "MouseEvent.h"
#include "ToolFactory.h"

class ToolJPanel: public javax::swing::JPanel {

public: ToolJPanel(){
this->initComponents();
    
}


    private: void initComponents(){
lineJButton= javax::swing::JButton();
    
this->rectJButton= javax::swing::JButton();
    
this->arcJButton= javax::swing::JButton();
    
this->stringJButton= javax::swing::JButton();
    
this->charJButton= javax::swing::JButton();
    
this->roundRectJButton= javax::swing::JButton();
    
this->imageJButton= javax::swing::JButton();
    
this->fillArcJButton= javax::swing::JButton();
    
this->fillRectJButton= javax::swing::JButton();
    
this->fillRoundRectJButton= javax::swing::JButton();
    
this->dottedLineJButton= javax::swing::JButton();
    
this->dottedRectButton= javax::swing::JButton();
    
this->dottedArcJButton= javax::swing::JButton();
    
this->dottedFillRectJButton= javax::swing::JButton();
    
this->dottedFillArcJButton= javax::swing::JButton();
    
this->dottedFillRountRectJButton= javax::swing::JButton();
    
this->colorJPanel= javax::swing::JPanel();
    
this->colorJList= javax::swing::JList();
    
this->setLayout(java::awt::GridLayout(17, 1));
    
lineJButton.setFont(java::awt::Font("Dialog", 0, 10));
    
lineJButton.setText(LinesGraphicItem::getStaticName());
    
lineJButton.addMouseListener(class extends java::awt::event::MouseAdapter
                                {
                                
    public: void mouseClicked(java::awt::event::MouseEvent evt){
lineJButtonMouseClicked(evt);
    
}

                                }
                            );
    
add(this->lineJButton);
    
this->rectJButton.setFont(java::awt::Font("Dialog", 0, 10));
    
this->rectJButton.setText("Rect");
    
this->rectJButton.addMouseListener(class extends java::awt::event::MouseAdapter
                                {
                                
    public: void mouseClicked(java::awt::event::MouseEvent evt){
rectJButtonMouseClicked(evt);
    
}

                                }
                            );
    
add(this->rectJButton);
    
this->arcJButton.setFont(java::awt::Font("Dialog", 0, 10));
    
this->arcJButton.setText("Arc");
    
this->arcJButton.addMouseListener(class extends java::awt::event::MouseAdapter
                                {
                                
    public: void mousePressed(java::awt::event::MouseEvent evt){
arcJButtonMousePressed(evt);
    
}

                                }
                            );
    
add(this->arcJButton);
    
this->stringJButton.setFont(java::awt::Font("Dialog", 0, 10));
    
this->stringJButton.setText("String");
    
this->stringJButton.addMouseListener(class extends java::awt::event::MouseAdapter
                                {
                                
    public: void mousePressed(java::awt::event::MouseEvent evt){
stringJButtonMousePressed(evt);
    
}

                                }
                            );
    
add(this->stringJButton);
    
this->charJButton.setFont(java::awt::Font("Dialog", 0, 10));
    
this->charJButton.setText("Char");
    
this->charJButton.addMouseListener(class extends java::awt::event::MouseAdapter
                                {
                                
    public: void mousePressed(java::awt::event::MouseEvent evt){
charJButtonMousePressed(evt);
    
}

                                }
                            );
    
add(this->charJButton);
    
this->roundRectJButton.setFont(java::awt::Font("Dialog", 0, 10));
    
this->roundRectJButton.setText("Round Rect");
    
this->roundRectJButton.addMouseListener(class extends java::awt::event::MouseAdapter
                                {
                                
    public: void mousePressed(java::awt::event::MouseEvent evt){
roundRectJButtonMousePressed(evt);
    
}

                                }
                            );
    
add(this->roundRectJButton);
    
this->imageJButton.setFont(java::awt::Font("Dialog", 0, 10));
    
this->imageJButton.setText("Image");
    
this->imageJButton.addMouseListener(class extends java::awt::event::MouseAdapter
                                {
                                
    public: void mousePressed(java::awt::event::MouseEvent evt){
imageJButtonMousePressed(evt);
    
}

                                }
                            );
    
add(this->imageJButton);
    
this->fillArcJButton.setFont(java::awt::Font("Dialog", 0, 10));
    
this->fillArcJButton.setText("Fill Arc");
    
this->fillArcJButton.addMouseListener(class extends java::awt::event::MouseAdapter
                                {
                                
    public: void mousePressed(java::awt::event::MouseEvent evt){
fillArcJButtonMousePressed(evt);
    
}

                                }
                            );
    
add(this->fillArcJButton);
    
this->fillRectJButton.setFont(java::awt::Font("Dialog", 0, 10));
    
this->fillRectJButton.setText("Fill Rect");
    
this->fillRectJButton.addMouseListener(class extends java::awt::event::MouseAdapter
                                {
                                
    public: void mousePressed(java::awt::event::MouseEvent evt){
fillRectJButtonMousePressed(evt);
    
}

                                }
                            );
    
add(this->fillRectJButton);
    
this->fillRoundRectJButton.setFont(java::awt::Font("Dialog", 0, 10));
    
this->fillRoundRectJButton.setText("Fill Rnd Rect");
    
this->fillRoundRectJButton.addMouseListener(class extends java::awt::event::MouseAdapter
                                {
                                
    public: void mousePressed(java::awt::event::MouseEvent evt){
fillRoundRectJButtonMousePressed(evt);
    
}

                                }
                            );
    
add(this->fillRoundRectJButton);
    
this->dottedLineJButton.setFont(java::awt::Font("Dialog", 0, 10));
    
this->dottedLineJButton.setText("Dot Line");
    
this->dottedLineJButton.addMouseListener(class extends java::awt::event::MouseAdapter
                                {
                                
    public: void mousePressed(java::awt::event::MouseEvent evt){
dottedLineJButtonMousePressed(evt);
    
}

                                }
                            );
    
add(this->dottedLineJButton);
    
this->dottedRectButton.setFont(java::awt::Font("Dialog", 0, 10));
    
this->dottedRectButton.setText("Dot Rect");
    
this->dottedRectButton.addMouseListener(class extends java::awt::event::MouseAdapter
                                {
                                
    public: void mousePressed(java::awt::event::MouseEvent evt){
dottedRectButtonMousePressed(evt);
    
}

                                }
                            );
    
add(this->dottedRectButton);
    
this->dottedArcJButton.setFont(java::awt::Font("Dialog", 0, 10));
    
this->dottedArcJButton.setText("Dot Arc");
    
this->dottedArcJButton.addMouseListener(class extends java::awt::event::MouseAdapter
                                {
                                
    public: void mousePressed(java::awt::event::MouseEvent evt){
dottedArcJButtonMousePressed(evt);
    
}

                                }
                            );
    
add(this->dottedArcJButton);
    
this->dottedFillRectJButton.setFont(java::awt::Font("Dialog", 0, 10));
    
this->dottedFillRectJButton.setText("Dot Fill Rect");
    
this->dottedFillRectJButton.addMouseListener(class extends java::awt::event::MouseAdapter
                                {
                                
    public: void mousePressed(java::awt::event::MouseEvent evt){
dottedFillRectJButtonMousePressed(evt);
    
}

                                }
                            );
    
add(this->dottedFillRectJButton);
    
this->dottedFillArcJButton.setFont(java::awt::Font("Dialog", 0, 10));
    
this->dottedFillArcJButton.setText("Dot Fill Arc");
    
this->dottedFillArcJButton.addMouseListener(class extends java::awt::event::MouseAdapter
                                {
                                
    public: void mousePressed(java::awt::event::MouseEvent evt){
dottedFillArcJButtonMousePressed(evt);
    
}

                                }
                            );
    
add(this->dottedFillArcJButton);
    
this->dottedFillRountRectJButton.setFont(java::awt::Font("Dialog", 0, 10));
    
this->dottedFillRountRectJButton.setText("Dot Fill Rnd Rect");
    
this->dottedFillRountRectJButton.addMouseListener(class extends java::awt::event::MouseAdapter
                                {
                                
    public: void mousePressed(java::awt::event::MouseEvent evt){
dottedFillRountRectJButtonMousePressed(evt);
    
}

                                }
                            );
    
add(this->dottedFillRountRectJButton);
    
this->colorJPanel.setLayout(java::awt::GridLayout(1, 1));
    
this->colorJPanel.add(this->colorJList);
    
add(this->colorJPanel);
    
}


    private: void dottedFillRountRectJButtonMousePressed(java::awt::event::MouseEvent evt){
ToolFactory::getInstance().setSelectedTool(this->dottedFillRountRectJButton.getText());
    
}


    private: void dottedFillArcJButtonMousePressed(java::awt::event::MouseEvent evt){
ToolFactory::getInstance().setSelectedTool(this->dottedFillArcJButton.getText());
    
}


    private: void dottedFillRectJButtonMousePressed(java::awt::event::MouseEvent evt){
ToolFactory::getInstance().setSelectedTool(this->dottedFillRectJButton.getText());
    
}


    private: void dottedArcJButtonMousePressed(java::awt::event::MouseEvent evt){
ToolFactory::getInstance().setSelectedTool(this->dottedArcJButton.getText());
    
}


    private: void dottedRectButtonMousePressed(java::awt::event::MouseEvent evt){
ToolFactory::getInstance().setSelectedTool(this->dottedRectButton.getText());
    
}


    private: void dottedLineJButtonMousePressed(java::awt::event::MouseEvent evt){
ToolFactory::getInstance().setSelectedTool(this->dottedLineJButton.getText());
    
}


    private: void fillRoundRectJButtonMousePressed(java::awt::event::MouseEvent evt){
ToolFactory::getInstance().setSelectedTool(this->fillRoundRectJButton.getText());
    
}


    private: void fillRectJButtonMousePressed(java::awt::event::MouseEvent evt){
ToolFactory::getInstance().setSelectedTool(this->fillRectJButton.getText());
    
}


    private: void fillArcJButtonMousePressed(java::awt::event::MouseEvent evt){
ToolFactory::getInstance().setSelectedTool(this->fillArcJButton.getText());
    
}


    private: void imageJButtonMousePressed(java::awt::event::MouseEvent evt){
ToolFactory::getInstance().setSelectedTool(this->imageJButton.getText());
    
}


    private: void roundRectJButtonMousePressed(java::awt::event::MouseEvent evt){
ToolFactory::getInstance().setSelectedTool(this->roundRectJButton.getText());
    
}


    private: void charJButtonMousePressed(java::awt::event::MouseEvent evt){
ToolFactory::getInstance().setSelectedTool(this->charJButton.getText());
    
}


    private: void stringJButtonMousePressed(java::awt::event::MouseEvent evt){
ToolFactory::getInstance().setSelectedTool(this->stringJButton.getText());
    
}


    private: void arcJButtonMousePressed(java::awt::event::MouseEvent evt){
ToolFactory::getInstance().setSelectedTool(this->arcJButton.getText());
    
}


    private: void rectJButtonMouseClicked(java::awt::event::MouseEvent evt){
ToolFactory::getInstance().setSelectedTool(this->rectJButton.getText());
    
}


    private: void lineJButtonMouseClicked(java::awt::event::MouseEvent evt){
ToolFactory::getInstance().setSelectedTool(this->lineJButton.getText());
    
}


    private: javax::swing::JButton arcJButton;

    private: javax::swing::JButton charJButton;

    private: javax::swing::JList colorJList;

    private: javax::swing::JPanel colorJPanel;

    private: javax::swing::JButton dottedArcJButton;

    private: javax::swing::JButton dottedFillArcJButton;

    private: javax::swing::JButton dottedFillRectJButton;

    private: javax::swing::JButton dottedFillRountRectJButton;

    private: javax::swing::JButton dottedLineJButton;

    private: javax::swing::JButton dottedRectButton;

    private: javax::swing::JButton fillArcJButton;

    private: javax::swing::JButton fillRectJButton;

    private: javax::swing::JButton fillRoundRectJButton;

    private: javax::swing::JButton imageJButton;

    private: javax::swing::JButton lineJButton;

    private: javax::swing::JButton rectJButton;

    private: javax::swing::JButton roundRectJButton;

    private: javax::swing::JButton stringJButton;

};

            

