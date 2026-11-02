
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_J2ME_WORKAREA_TOOLS_TOOLJPANEL_CPP
        #define ORG_ALLBINARY_GRAPHICS_J2ME_WORKAREA_TOOLS_TOOLJPANEL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/graphics/j2me/workarea/tools/ToolJPanel.h"
        

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


ToolJPanel::ToolJPanel(){
this->initComponents();
    
}


    auto ToolJPanel::initComponents() -> void{
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
    
lineJButton->addMouseListener([&]() {
    static thread_local ToolJPanel* anonymousOuter0 = nullptr;
    anonymousOuter0 = this;
    class Anonymous0 : public java::awt::event::MouseAdapter {
    public:
    using java::awt::event::MouseAdapter::MouseAdapter;
    ToolJPanel* outer = anonymousOuter0;

    public: void mouseClicked(java::awt::event::MouseEvent* evt){
outer->lineJButtonMouseClicked(evt);
    
}

    };
    return new Anonymous0();
}());
    
add(this->lineJButton);
    
this->rectJButton->setFont(new java::awt::Font("Dialog", 0, 10));
    
this->rectJButton->setText("Rect");
    
this->rectJButton->addMouseListener([&]() {
    static thread_local ToolJPanel* anonymousOuter0 = nullptr;
    anonymousOuter0 = this;
    class Anonymous0 : public java::awt::event::MouseAdapter {
    public:
    using java::awt::event::MouseAdapter::MouseAdapter;
    ToolJPanel* outer = anonymousOuter0;

    public: void mouseClicked(java::awt::event::MouseEvent* evt){
outer->rectJButtonMouseClicked(evt);
    
}

    };
    return new Anonymous0();
}());
    
add(this->rectJButton);
    
this->arcJButton->setFont(new java::awt::Font("Dialog", 0, 10));
    
this->arcJButton->setText("Arc");
    
this->arcJButton->addMouseListener([&]() {
    static thread_local ToolJPanel* anonymousOuter0 = nullptr;
    anonymousOuter0 = this;
    class Anonymous0 : public java::awt::event::MouseAdapter {
    public:
    using java::awt::event::MouseAdapter::MouseAdapter;
    ToolJPanel* outer = anonymousOuter0;

    public: void mousePressed(java::awt::event::MouseEvent* evt){
outer->arcJButtonMousePressed(evt);
    
}

    };
    return new Anonymous0();
}());
    
add(this->arcJButton);
    
this->stringJButton->setFont(new java::awt::Font("Dialog", 0, 10));
    
this->stringJButton->setText("String");
    
this->stringJButton->addMouseListener([&]() {
    static thread_local ToolJPanel* anonymousOuter0 = nullptr;
    anonymousOuter0 = this;
    class Anonymous0 : public java::awt::event::MouseAdapter {
    public:
    using java::awt::event::MouseAdapter::MouseAdapter;
    ToolJPanel* outer = anonymousOuter0;

    public: void mousePressed(java::awt::event::MouseEvent* evt){
outer->stringJButtonMousePressed(evt);
    
}

    };
    return new Anonymous0();
}());
    
add(this->stringJButton);
    
this->charJButton->setFont(new java::awt::Font("Dialog", 0, 10));
    
this->charJButton->setText("Char");
    
this->charJButton->addMouseListener([&]() {
    static thread_local ToolJPanel* anonymousOuter0 = nullptr;
    anonymousOuter0 = this;
    class Anonymous0 : public java::awt::event::MouseAdapter {
    public:
    using java::awt::event::MouseAdapter::MouseAdapter;
    ToolJPanel* outer = anonymousOuter0;

    public: void mousePressed(java::awt::event::MouseEvent* evt){
outer->charJButtonMousePressed(evt);
    
}

    };
    return new Anonymous0();
}());
    
add(this->charJButton);
    
this->roundRectJButton->setFont(new java::awt::Font("Dialog", 0, 10));
    
this->roundRectJButton->setText("Round Rect");
    
this->roundRectJButton->addMouseListener([&]() {
    static thread_local ToolJPanel* anonymousOuter0 = nullptr;
    anonymousOuter0 = this;
    class Anonymous0 : public java::awt::event::MouseAdapter {
    public:
    using java::awt::event::MouseAdapter::MouseAdapter;
    ToolJPanel* outer = anonymousOuter0;

    public: void mousePressed(java::awt::event::MouseEvent* evt){
outer->roundRectJButtonMousePressed(evt);
    
}

    };
    return new Anonymous0();
}());
    
add(this->roundRectJButton);
    
this->imageJButton->setFont(new java::awt::Font("Dialog", 0, 10));
    
this->imageJButton->setText("Image");
    
this->imageJButton->addMouseListener([&]() {
    static thread_local ToolJPanel* anonymousOuter0 = nullptr;
    anonymousOuter0 = this;
    class Anonymous0 : public java::awt::event::MouseAdapter {
    public:
    using java::awt::event::MouseAdapter::MouseAdapter;
    ToolJPanel* outer = anonymousOuter0;

    public: void mousePressed(java::awt::event::MouseEvent* evt){
outer->imageJButtonMousePressed(evt);
    
}

    };
    return new Anonymous0();
}());
    
add(this->imageJButton);
    
this->fillArcJButton->setFont(new java::awt::Font("Dialog", 0, 10));
    
this->fillArcJButton->setText("Fill Arc");
    
this->fillArcJButton->addMouseListener([&]() {
    static thread_local ToolJPanel* anonymousOuter0 = nullptr;
    anonymousOuter0 = this;
    class Anonymous0 : public java::awt::event::MouseAdapter {
    public:
    using java::awt::event::MouseAdapter::MouseAdapter;
    ToolJPanel* outer = anonymousOuter0;

    public: void mousePressed(java::awt::event::MouseEvent* evt){
outer->fillArcJButtonMousePressed(evt);
    
}

    };
    return new Anonymous0();
}());
    
add(this->fillArcJButton);
    
this->fillRectJButton->setFont(new java::awt::Font("Dialog", 0, 10));
    
this->fillRectJButton->setText("Fill Rect");
    
this->fillRectJButton->addMouseListener([&]() {
    static thread_local ToolJPanel* anonymousOuter0 = nullptr;
    anonymousOuter0 = this;
    class Anonymous0 : public java::awt::event::MouseAdapter {
    public:
    using java::awt::event::MouseAdapter::MouseAdapter;
    ToolJPanel* outer = anonymousOuter0;

    public: void mousePressed(java::awt::event::MouseEvent* evt){
outer->fillRectJButtonMousePressed(evt);
    
}

    };
    return new Anonymous0();
}());
    
add(this->fillRectJButton);
    
this->fillRoundRectJButton->setFont(new java::awt::Font("Dialog", 0, 10));
    
this->fillRoundRectJButton->setText("Fill Rnd Rect");
    
this->fillRoundRectJButton->addMouseListener([&]() {
    static thread_local ToolJPanel* anonymousOuter0 = nullptr;
    anonymousOuter0 = this;
    class Anonymous0 : public java::awt::event::MouseAdapter {
    public:
    using java::awt::event::MouseAdapter::MouseAdapter;
    ToolJPanel* outer = anonymousOuter0;

    public: void mousePressed(java::awt::event::MouseEvent* evt){
outer->fillRoundRectJButtonMousePressed(evt);
    
}

    };
    return new Anonymous0();
}());
    
add(this->fillRoundRectJButton);
    
this->dottedLineJButton->setFont(new java::awt::Font("Dialog", 0, 10));
    
this->dottedLineJButton->setText("Dot Line");
    
this->dottedLineJButton->addMouseListener([&]() {
    static thread_local ToolJPanel* anonymousOuter0 = nullptr;
    anonymousOuter0 = this;
    class Anonymous0 : public java::awt::event::MouseAdapter {
    public:
    using java::awt::event::MouseAdapter::MouseAdapter;
    ToolJPanel* outer = anonymousOuter0;

    public: void mousePressed(java::awt::event::MouseEvent* evt){
outer->dottedLineJButtonMousePressed(evt);
    
}

    };
    return new Anonymous0();
}());
    
add(this->dottedLineJButton);
    
this->dottedRectButton->setFont(new java::awt::Font("Dialog", 0, 10));
    
this->dottedRectButton->setText("Dot Rect");
    
this->dottedRectButton->addMouseListener([&]() {
    static thread_local ToolJPanel* anonymousOuter0 = nullptr;
    anonymousOuter0 = this;
    class Anonymous0 : public java::awt::event::MouseAdapter {
    public:
    using java::awt::event::MouseAdapter::MouseAdapter;
    ToolJPanel* outer = anonymousOuter0;

    public: void mousePressed(java::awt::event::MouseEvent* evt){
outer->dottedRectButtonMousePressed(evt);
    
}

    };
    return new Anonymous0();
}());
    
add(this->dottedRectButton);
    
this->dottedArcJButton->setFont(new java::awt::Font("Dialog", 0, 10));
    
this->dottedArcJButton->setText("Dot Arc");
    
this->dottedArcJButton->addMouseListener([&]() {
    static thread_local ToolJPanel* anonymousOuter0 = nullptr;
    anonymousOuter0 = this;
    class Anonymous0 : public java::awt::event::MouseAdapter {
    public:
    using java::awt::event::MouseAdapter::MouseAdapter;
    ToolJPanel* outer = anonymousOuter0;

    public: void mousePressed(java::awt::event::MouseEvent* evt){
outer->dottedArcJButtonMousePressed(evt);
    
}

    };
    return new Anonymous0();
}());
    
add(this->dottedArcJButton);
    
this->dottedFillRectJButton->setFont(new java::awt::Font("Dialog", 0, 10));
    
this->dottedFillRectJButton->setText("Dot Fill Rect");
    
this->dottedFillRectJButton->addMouseListener([&]() {
    static thread_local ToolJPanel* anonymousOuter0 = nullptr;
    anonymousOuter0 = this;
    class Anonymous0 : public java::awt::event::MouseAdapter {
    public:
    using java::awt::event::MouseAdapter::MouseAdapter;
    ToolJPanel* outer = anonymousOuter0;

    public: void mousePressed(java::awt::event::MouseEvent* evt){
outer->dottedFillRectJButtonMousePressed(evt);
    
}

    };
    return new Anonymous0();
}());
    
add(this->dottedFillRectJButton);
    
this->dottedFillArcJButton->setFont(new java::awt::Font("Dialog", 0, 10));
    
this->dottedFillArcJButton->setText("Dot Fill Arc");
    
this->dottedFillArcJButton->addMouseListener([&]() {
    static thread_local ToolJPanel* anonymousOuter0 = nullptr;
    anonymousOuter0 = this;
    class Anonymous0 : public java::awt::event::MouseAdapter {
    public:
    using java::awt::event::MouseAdapter::MouseAdapter;
    ToolJPanel* outer = anonymousOuter0;

    public: void mousePressed(java::awt::event::MouseEvent* evt){
outer->dottedFillArcJButtonMousePressed(evt);
    
}

    };
    return new Anonymous0();
}());
    
add(this->dottedFillArcJButton);
    
this->dottedFillRountRectJButton->setFont(new java::awt::Font("Dialog", 0, 10));
    
this->dottedFillRountRectJButton->setText("Dot Fill Rnd Rect");
    
this->dottedFillRountRectJButton->addMouseListener([&]() {
    static thread_local ToolJPanel* anonymousOuter0 = nullptr;
    anonymousOuter0 = this;
    class Anonymous0 : public java::awt::event::MouseAdapter {
    public:
    using java::awt::event::MouseAdapter::MouseAdapter;
    ToolJPanel* outer = anonymousOuter0;

    public: void mousePressed(java::awt::event::MouseEvent* evt){
outer->dottedFillRountRectJButtonMousePressed(evt);
    
}

    };
    return new Anonymous0();
}());
    
add(this->dottedFillRountRectJButton);
    
this->colorJPanel->setLayout(new java::awt::GridLayout(1, 1));
    
this->colorJPanel->add(this->colorJList);
    
add(this->colorJPanel);
    
}


    auto ToolJPanel::dottedFillRountRectJButtonMousePressed(java::awt::event::MouseEvent* evt) -> void{
ToolFactory::getInstance()->setSelectedTool(this->dottedFillRountRectJButton->getText());
    
}


    auto ToolJPanel::dottedFillArcJButtonMousePressed(java::awt::event::MouseEvent* evt) -> void{
ToolFactory::getInstance()->setSelectedTool(this->dottedFillArcJButton->getText());
    
}


    auto ToolJPanel::dottedFillRectJButtonMousePressed(java::awt::event::MouseEvent* evt) -> void{
ToolFactory::getInstance()->setSelectedTool(this->dottedFillRectJButton->getText());
    
}


    auto ToolJPanel::dottedArcJButtonMousePressed(java::awt::event::MouseEvent* evt) -> void{
ToolFactory::getInstance()->setSelectedTool(this->dottedArcJButton->getText());
    
}


    auto ToolJPanel::dottedRectButtonMousePressed(java::awt::event::MouseEvent* evt) -> void{
ToolFactory::getInstance()->setSelectedTool(this->dottedRectButton->getText());
    
}


    auto ToolJPanel::dottedLineJButtonMousePressed(java::awt::event::MouseEvent* evt) -> void{
ToolFactory::getInstance()->setSelectedTool(this->dottedLineJButton->getText());
    
}


    auto ToolJPanel::fillRoundRectJButtonMousePressed(java::awt::event::MouseEvent* evt) -> void{
ToolFactory::getInstance()->setSelectedTool(this->fillRoundRectJButton->getText());
    
}


    auto ToolJPanel::fillRectJButtonMousePressed(java::awt::event::MouseEvent* evt) -> void{
ToolFactory::getInstance()->setSelectedTool(this->fillRectJButton->getText());
    
}


    auto ToolJPanel::fillArcJButtonMousePressed(java::awt::event::MouseEvent* evt) -> void{
ToolFactory::getInstance()->setSelectedTool(this->fillArcJButton->getText());
    
}


    auto ToolJPanel::imageJButtonMousePressed(java::awt::event::MouseEvent* evt) -> void{
ToolFactory::getInstance()->setSelectedTool(this->imageJButton->getText());
    
}


    auto ToolJPanel::roundRectJButtonMousePressed(java::awt::event::MouseEvent* evt) -> void{
ToolFactory::getInstance()->setSelectedTool(this->roundRectJButton->getText());
    
}


    auto ToolJPanel::charJButtonMousePressed(java::awt::event::MouseEvent* evt) -> void{
ToolFactory::getInstance()->setSelectedTool(this->charJButton->getText());
    
}


    auto ToolJPanel::stringJButtonMousePressed(java::awt::event::MouseEvent* evt) -> void{
ToolFactory::getInstance()->setSelectedTool(this->stringJButton->getText());
    
}


    auto ToolJPanel::arcJButtonMousePressed(java::awt::event::MouseEvent* evt) -> void{
ToolFactory::getInstance()->setSelectedTool(this->arcJButton->getText());
    
}


    auto ToolJPanel::rectJButtonMouseClicked(java::awt::event::MouseEvent* evt) -> void{
ToolFactory::getInstance()->setSelectedTool(this->rectJButton->getText());
    
}


    auto ToolJPanel::lineJButtonMouseClicked(java::awt::event::MouseEvent* evt) -> void{
ToolFactory::getInstance()->setSelectedTool(this->lineJButton->getText());
    
}




        #endif //ORG_ALLBINARY_GRAPHICS_J2ME_WORKAREA_TOOLS_TOOLJPANEL_CPP
