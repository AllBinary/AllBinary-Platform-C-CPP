
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_J2ME_WORKAREA_CANVAS_CANVASJPANEL_CPP
        #define ORG_ALLBINARY_GRAPHICS_J2ME_WORKAREA_CANVAS_CANVASJPANEL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/graphics/j2me/workarea/canvas/CanvasJPanel.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
            #include "java/lang/Double.h"
        
#include <java/awt.h>

      
#include <java/util/HashMap.h>

      
#include <javax/swing/tree/DefaultMutableTreeNode.h>

      
#include <javax/swing/tree/MutableTreeNode.h>

      
#include <org/allbinary/animation/VectorExplosionGenerator.h>

      
#include <org/allbinary/animation/VectorMirrorGenerator.h>

      
#include <org/allbinary/animation/vector/VectorCenterGenerator.h>

      
#include <org/allbinary/game/input/GameInputStrings.h>

      
#include <org/allbinary/graphics/GPoint.h>

      
#include <org/allbinary/graphics/PointFactory.h>

      
#include <org/allbinary/graphics/color/BasicColorFactory.h>

      
#include <org/allbinary/graphics/j2me/GraphicsException.h>

      
#include <org/allbinary/graphics/j2me/StatusFactory.h>

      
#include <org/allbinary/graphics/j2me/workarea/WorkAreaJTreeJPanel.h>

      
#include <org/allbinary/graphics/j2me/workarea/tools/GraphicItemFactory.h>

      
#include <org/allbinary/graphics/j2me/workarea/tools/GraphicItemInterface.h>

      
#include <org/allbinary/graphics/j2me/workarea/tools/LinesGraphicItem.h>

      
#include <org/allbinary/graphics/j2me/workarea/tools/MouseStrings.h>

      
#include <org/allbinary/graphics/j2me/workarea/tools/Points.h>

      
#include <org/allbinary/graphics/j2me/workarea/tools/ToolFactory.h>

      
#include <org/allbinary/graphics/j2me/workarea/tools/event/MyGraphicItemEvent.h>

      
#include <org/allbinary/graphics/j2me/workarea/tools/event/MyGraphicItemEventListener.h>

      
#include <org/allbinary/graphics/j2me/workarea/tools/event/MyGraphicItemEventService.h>

      
#include <org/allbinary/graphics/pipeline/RandomRotationFactory.h>

      
#include <org/allbinary/log/LOGGING.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/communication/log/GuiLog.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/math/PositionStrings.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/graphics/j2me/workarea/canvas/JPanel.h"
#include "org/allbinary/graphics/j2me/workarea/canvas/MouseListener.h"
#include "org/allbinary/graphics/j2me/workarea/canvas/MouseMotionListener.h"
#include "org/allbinary/graphics/j2me/workarea/canvas/KeyListener.h"
#include "org/allbinary/graphics/j2me/workarea/canvas/IntegerDimension.h"
#include "org/allbinary/graphics/j2me/workarea/canvas/CanvasTreeLabel.h"
#include "org/allbinary/graphics/j2me/workarea/canvas/Color.h"
#include "org/allbinary/graphics/j2me/workarea/canvas/Grid.h"
#include "org/allbinary/graphics/j2me/workarea/canvas/Dimension.h"
#include "org/allbinary/graphics/j2me/workarea/canvas/CanvasDom.h"
#include "org/allbinary/graphics/j2me/workarea/canvas/GridLayout.h"
#include "org/allbinary/graphics/j2me/workarea/canvas/Graphics.h"
#include "org/allbinary/graphics/j2me/workarea/canvas/MouseEvent.h"
#include "org/allbinary/graphics/j2me/workarea/canvas/KeyEvent.h"

auto CanvasJPanel::gridColor_owner() -> Color* { static std::unique_ptr<Color> value(new Color(BasicColorFactory::getInstance()->WHITE->intValue())); return value.get(); }
Color* CanvasJPanel::gridColor = CanvasJPanel::gridColor_owner();
auto CanvasJPanel::backgroundColor_owner() -> Color* { static std::unique_ptr<Color> value(new Color(BasicColorFactory::getInstance()->CLEAR_COLOR->intValue())); return value.get(); }
Color* CanvasJPanel::backgroundColor = CanvasJPanel::backgroundColor_owner();

CanvasJPanel::CanvasJPanel(WorkAreaJTreeJPanel* workAreaJTreeJPanel, Dimension* dimension, int32_t x, int32_t y) : logUtil(LogUtil::getInstance()), guiLog(GuiLog::getInstance()), gameInputStrings(GameInputStrings::getInstance()){
this->grid= new Grid();
    

        try {
            this->workAreaJTreeJPanel= workAreaJTreeJPanel;
    
this->initComponents();
    
this->initMyComponents();
    
this->setSize(dimension);
    
this->setCanvasSize(x, y);
    

                //: 
} catch(Exception& e) 
            {

                        if(LOGGING::contains(LOGGING::GRAPHICSCREATION))
                        
                                    {
                                    this->guiLog->put("Constructor Error", this, "contructor", &e);
    

                                    }
                                
}

}


CanvasJPanel::CanvasJPanel(WorkAreaJTreeJPanel* workAreaJTreeJPanel, Dimension* dimension, CanvasDom* canvasDom) : logUtil(LogUtil::getInstance()), guiLog(GuiLog::getInstance()), gameInputStrings(GameInputStrings::getInstance()){
this->grid= new Grid(canvasDom->getGrid());
    

        try {
            this->workAreaJTreeJPanel= workAreaJTreeJPanel;
    
this->initComponents();
    
this->initMyComponents();
    
this->setSize(dimension);
    
this->setCanvasSize(canvasDom->getDimension()->getWidth(), canvasDom->getDimension()->getHeight());
    
this->graphicItemHashMap= canvasDom->getGraphicItemHashMap();
    

    std::vector<Object*> graphicItemArray = this->graphicItemHashMap->keys().();;
    

    int32_t size = graphicItemArray.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    MutableTreeNode* graphicItemTreeNode = dynamic_cast<MutableTreeNode*>(graphicItemArray[index]);;
    
this->canvasTreeNode->add(graphicItemTreeNode);
    
}

this->repaint();
    
this->setAngle(canvasDom->getAngle());
    
this->workAreaJTreeJPanel->updateTree();
    
this->workAreaJTreeJPanel->expand();
    
this->workAreaJTreeJPanel->repaint();
    

                //: 
} catch(Exception& e) 
            {

                        if(LOGGING::contains(LOGGING::GRAPHICSCREATION))
                        
                                    {
                                    this->guiLog->put("Constructor Error", this, "contructor", &e);
    

                                    }
                                
}

}


                //@Throws(Exception.constructor)
            
    auto CanvasJPanel::initMyComponents() -> void{
this->frameLabel= new CanvasTreeLabel(JavaString::valueOf("FrameLabel") +JavaString::valueOf((int32_t(CanvasJPanel::frame)).toString()));
    
this->canvasTreeNode= new DefaultMutableTreeNode(this->frameLabel);
    
CanvasJPanel::frame++;
    
this->workAreaJTreeJPanel->add(this->getTreeNode());
    
this->graphicItemHashMap= StdUtil::getInstance()->createHashMap();
    
this->grid->grid= PointFactory::getInstance()->createXY(0, 0);
    
this->setCanvasDimension(new IntegerDimension(0, 0));
    
this->selectedTool= 
                                        nullptr
                                    ;
    
this->addKeyListener(this);
    
this->addMouseListener(this);
    
this->addMouseMotionListener(this);
    
MyGraphicItemEventService::addListener(this);
    
}


    auto CanvasJPanel::getTreeNode() -> MutableTreeNode*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->canvasTreeNode;
    
}


    auto CanvasJPanel::initComponents() -> void{
setLayout(new java::awt::GridLayout(1, 1));
    
}


                //@Throws(Exception.constructor)
            
    auto CanvasJPanel::setCanvasSize(int32_t x, int32_t y) -> void{
this->grid->isGridPossible= true;
    

                        if(x <= 0)
                        
                                    {
                                    this->grid->isGridPossible= false;
    



                            throw GraphicsException(JavaString::valueOf("X Size Error: ") +JavaString::valueOf(x), this, "setWorkAreaSize");
                    

                                    }
                                

                        if(y <= 0)
                        
                                    {
                                    this->grid->isGridPossible= false;
    



                            throw GraphicsException(JavaString::valueOf("Y Size Error: ") +JavaString::valueOf(y), this, "setWorkAreaSize");
                    

                                    }
                                

                        if(x > this->getWidth())
                        
                                    {
                                    this->grid->isGridPossible= false;
    

                                    }
                                

                        if(y > this->getHeight())
                        
                                    {
                                    this->grid->isGridPossible= false;
    

                                    }
                                
this->setCanvasDimension(new IntegerDimension(x, y));
    
this->grid->isChanged= true;
    
}


    auto CanvasJPanel::setGrid(GPoint* point) -> void{
this->setGrid(point->getX(), point->getY());
    
}


    auto CanvasJPanel::setGrid(int32_t xSize, int32_t ySize) -> void{

        try {
            
                        if(xSize >= getCanvasDimension()->getWidth() /2 || xSize < 1)
                        
                                    {
                                    


                            throw GraphicsException(JavaString::valueOf(JavaString::valueOf(JavaString::valueOf("X Size Error: ") +JavaString::valueOf(xSize)) +JavaString::valueOf(" WorkArea X: ")) +JavaString::valueOf(getCanvasDimension()->getWidth()), this, "setGrid");
                    

                                    }
                                

                        if(ySize >= getCanvasDimension()->getHeight() /2 || ySize < 1)
                        
                                    {
                                    


                            throw GraphicsException(JavaString::valueOf(JavaString::valueOf(JavaString::valueOf("Y Size Error") +JavaString::valueOf(ySize)) +JavaString::valueOf(" WorkArea Y: ")) +JavaString::valueOf(getCanvasDimension()->getHeight()), this, "setGrid");
                    

                                    }
                                
this->grid->grid= PointFactory::getInstance()->createXY(xSize, ySize);
    
this->grid->isChanged= true;
    

                //: 
} catch(Exception& e) 
            {
}

}


                //@Throws(Exception.constructor)
            
    auto CanvasJPanel::setDefaultGrid() -> void{

    int32_t xPixelsPerWorkAreaPixel = this->getWidth() /this->getCanvasDimension()->getWidth();;
    

    int32_t yPixelsPerWorkAreaPixel = this->getHeight() /this->getCanvasDimension()->getHeight();;
    
this->setGrid(1, 1);
    
this->grid->isChanged= true;
    
}


    auto CanvasJPanel::getAngle() -> double{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->angle;
    
}


    auto CanvasJPanel::setAngle(double angle) -> void{
this->angle= angle;
    
}


    auto CanvasJPanel::addAngle(double angle) -> void{
this->setAngle(this->angle +angle);
    
}


    auto CanvasJPanel::explodeAll() -> void{

    BasicArrayList* newPoints = new BasicArrayListD();;
    

    std::vector<Object*> graphicItemArray = this->getGraphicItemHashMap()->keys().();;
    

    int32_t size = graphicItemArray.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    MutableTreeNode* graphicItemNode = dynamic_cast<MutableTreeNode*>(graphicItemArray[index]);;
    

    GraphicItemInterface* graphicItem = dynamic_cast<GraphicItemInterface*>(this->getGraphicItemHashMap()->get(graphicItemNode));;
    

                        if(graphicItem->getName() == LinesGraphicItem::getStaticName())
                        
                                    {
                                    
        while(graphicItem->getPointsInterface()->getSize() > 2)
        {

    GraphicItemInterface* newGraphicItem = GraphicItemFactory::getInstance()->getInstance(graphicItem->getName())->getInstance(this);;
    

    GPoint* pointOne = GPoint::getInstance(graphicItem->removePoint());;
    

    GPoint* pointTwo = GPoint::getInstance(graphicItem->removePoint());;
    

                        if(pointOne != 
                                    nullptr
                                 && pointTwo != 
                                    nullptr
                                )
                        
                                    {
                                    newGraphicItem->addPoint(pointOne);
    
newGraphicItem->addPoint(pointTwo);
    

                                    }
                                
newPoints->add(newGraphicItem);
    
}


                                    }
                                
}


    int32_t size2 = newPoints->size();;
    




                        for (
    int32_t index = 0;index < size2; index++)
        {

    GraphicItemInterface* newGraphicItem = dynamic_cast<GraphicItemInterface*>(newPoints->get(index));;
    
this->canvasTreeNode->add(newGraphicItem->getTreeNode());
    
this->getGraphicItemHashMap()->put(newGraphicItem->getTreeNode(), newGraphicItem);
    
}

this->workAreaJTreeJPanel->updateTree();
    
this->workAreaJTreeJPanel->expand();
    
this->workAreaJTreeJPanel->repaint();
    
}


                //@Throws(Exception.constructor)
            
    auto CanvasJPanel::explode(int32_t howMuch, int32_t explosionType) -> void{

    std::vector<Object*> graphicItemArray = this->getGraphicItemHashMap()->keys().();;
    

    int32_t size = graphicItemArray.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    GraphicItemInterface* item = dynamic_cast<GraphicItemInterface*>(this->getGraphicItemHashMap()->get(graphicItemArray[index]));;
    

    BasicArrayList* basicArrayList = VectorExplosionGenerator::getInstance()->createList(item->getPointsInterface()->getPoints(), howMuch, VectorExplosionGenerator::getInstance()->RANDOM);;
    

    Points* newPoints = new Points();;
    
newPoints->addPoints(basicArrayList);
    
item->setPointsInterface(newPoints);
    

    int32_t angleDelta = RandomRotationFactory::getInstance()->getNextRandomAngle(howMuch);;
    
item->setAngle(angleDelta);
    
}

this->repaint();
    
}


                //@Throws(Exception.constructor)
            
    auto CanvasJPanel::mirror() -> void{

    int32_t width = this->getCanvasDimension()->getWidth();;
    

    std::vector<Object*> graphicItemArray = this->getGraphicItemHashMap()->keys().();;
    

    int32_t size = graphicItemArray.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    GraphicItemInterface* item = dynamic_cast<GraphicItemInterface*>(this->getGraphicItemHashMap()->get(graphicItemArray[index]));;
    

    BasicArrayList* basicArrayList = VectorMirrorGenerator::getInstance()->getInstance(item->getPointsInterface()->getPoints(), width);;
    

    Points* newPoints = new Points();;
    
newPoints->addPoints(basicArrayList);
    
item->setPointsInterface(newPoints);
    
}

this->repaint();
    
}


                //@Throws(Exception.constructor)
            
    auto CanvasJPanel::center() -> void{
(new VectorCenterGenerator())->transform(this->getGraphicItemHashMap());
    
this->repaint();
    
}


    auto CanvasJPanel::setNewTool() -> void{

        try {
            StatusFactory::getInstance()->setStatus("Tool Selected");
    
this->selectedTool= ToolFactory::getInstance()->getSelectedToolFactory()->getInstance(this);
    

    MutableTreeNode* newNode = this->selectedTool->getTreeNode();;
    
this->getGraphicItemHashMap()->put(newNode, this->selectedTool);
    
this->canvasTreeNode->add(newNode);
    

                        if(this->getSelectedTool() == 
                                    nullptr
                                )
                        
                                    {
                                    


                            throw GraphicsException("No Tool Selected", this, "setSelectedTool");
                    

                                    }
                                

                //: 
} catch(Exception& e) 
            {
}

}


                //@Throws(Exception.constructor)
            
    auto CanvasJPanel::duplicateGraphicItem(GraphicItemInterface* graphicItem) -> void{

    GraphicItemInterface* graphicItemClone = graphicItem->duplicate();;
    
this->getGraphicItemHashMap()->put(graphicItemClone->getTreeNode(), graphicItemClone);
    
this->canvasTreeNode->add(graphicItemClone->getTreeNode());
    
}


                //@Throws(Exception.constructor)
            
    auto CanvasJPanel::duplicateGraphicItemHashMap(HashMap<Object*, Object*>* hashMap) -> void{

    std::vector<Object*> mutableTreeNodeArray = hashMap->keys().();;
    

    int32_t size = mutableTreeNodeArray.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    MutableTreeNode* treeNode = dynamic_cast<MutableTreeNode*>(mutableTreeNodeArray[index]);;
    

    GraphicItemInterface* graphicItem = dynamic_cast<GraphicItemInterface*>(hashMap->get(treeNode));;
    
this->duplicateGraphicItem(graphicItem);
    
}

}


    auto CanvasJPanel::getGraphicItemHashMap() -> HashMap<Object*, Object*>*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->graphicItemHashMap;
    
}


    auto CanvasJPanel::getXPixelsPerWorkAreaPixel() -> int32_t{

    int32_t x = this->getGrid()->grid->getX() *(this->getWidth() -10) /this->getCanvasDimension()->getWidth();;
    

                        if(this->getGrid()->getZoom() == 1)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return 1;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return x;
    

                        }
                            
}


    auto CanvasJPanel::getYPixelsPerWorkAreaPixel() -> int32_t{

    int32_t y = this->getGrid()->grid->getY() *(this->getHeight() -10) /this->getCanvasDimension()->getHeight();;
    

                        if(this->getGrid()->getZoom() == 1)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return 1;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return y;
    

                        }
                            
}


    auto CanvasJPanel::getSelectedTool() -> GraphicItemInterface*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->selectedTool;
    
}


    auto CanvasJPanel::drawItems(Graphics* graphics) -> void{

    double angleDouble = double(this->angle);;
    

    std::vector<Object*> graphicItemArray = this->getGraphicItemHashMap()->keys().();;
    

    int32_t size = graphicItemArray.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    GraphicItemInterface* item = dynamic_cast<GraphicItemInterface*>(this->getGraphicItemHashMap()->get(graphicItemArray[index]));;
    
item->paint(graphics, angleDouble, this->getCanvasDimension(), this->getXPixelsPerWorkAreaPixel(), this->getYPixelsPerWorkAreaPixel());
    
}

}


    auto CanvasJPanel::drawGrid(Graphics* graphics) -> void{

    int32_t xAdjust = (this->getWidth() % this->getXPixelsPerWorkAreaPixel()) /2;;
    

    int32_t yAdjust = (this->getHeight() % this->getYPixelsPerWorkAreaPixel()) /2;;
    

    int32_t xLeft = xAdjust;;
    

    int32_t yUpper = yAdjust;;
    

    int32_t xRight = this->getWidth() -xAdjust;;
    

    int32_t yLower = this->getHeight() -yAdjust;;
    
graphics->setColor(CanvasJPanel::gridColor);
    




                        for (
    int32_t value = yAdjust;value <= this->getHeight() -yAdjust; )
        {
graphics->drawLine(xLeft, value, xRight, value);
    
}





                        for (
    int32_t value = xAdjust;value <= this->getWidth() -xAdjust; )
        {
graphics->drawLine(value, yUpper, value, yLower);
    
}

}


    auto CanvasJPanel::paint(Graphics* graphics) -> void{

        try {
            
                        if(this->getGrid()->isChanged)
                        
                                    {
                                    graphics->setColor(CanvasJPanel::backgroundColor);
    
graphics->fillRect(0, 0, getWidth(), getHeight());
    

                        if(this->getGrid()->getZoom() > 2 && this->getGrid()->isGridOn && this->getGrid()->isGridPossible)
                        
                                    {
                                    this->setDefaultGrid();
    
this->drawGrid(graphics);
    

                                    }
                                
this->drawItems(graphics);
    
graphics->drawString((double(this->getAngle())).toString(), this->getWidth() -75, this->getHeight() -15);
    
this->grid->isChanged= false;
    

                                    }
                                

                //: 
} catch(Exception& e) 
            {
}

}


    auto CanvasJPanel::repaint() -> void{

                        if(this->grid != 
                                    nullptr
                                )
                        
                                    {
                                    this->grid->isChanged= true;
    

                                    }
                                
javax::swing::JPanel::repaint();
    
}


                //@Throws(Exception.constructor)
            
    auto CanvasJPanel::toDom() -> Node*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return (new CanvasDom(this))->toDom();;
    
}


    auto CanvasJPanel::changed() -> void{
this->grid->isChanged= true;
    
}


    auto CanvasJPanel::mouseClicked(java::awt::event::MouseEvent* mouseEvent) -> void{
StatusFactory::getInstance()->setStatusNoLog(MouseStrings::getInstance()->MOUSE_CLICKED_LABEL +this->logMouseEvent(mouseEvent));
    

                        if(this->getSelectedTool() != 
                                    nullptr
                                 && this->getSelectedTool()->isActive())
                        
                                    {
                                    
    GraphicItemInterface* graphicItem = this->getSelectedTool();;
    
graphicItem->mouseClicked(mouseEvent, this->getXPixelsPerWorkAreaPixel(), this->getYPixelsPerWorkAreaPixel());
    

                                    }
                                
                        else {
                            this->setNewTool();
    

    GraphicItemInterface* graphicItem = this->getSelectedTool();;
    

                        if(graphicItem != 
                                    nullptr
                                )
                        
                                    {
                                    graphicItem->mouseClicked(mouseEvent, this->getXPixelsPerWorkAreaPixel(), this->getYPixelsPerWorkAreaPixel());
    

                                    }
                                

                        }
                            
this->grid->isChanged= true;
    
this->repaint();
    
this->workAreaJTreeJPanel->updateTree();
    
this->workAreaJTreeJPanel->expand();
    
this->workAreaJTreeJPanel->repaint();
    
}


    auto CanvasJPanel::mouseEntered(java::awt::event::MouseEvent* mouseEvent) -> void{
StatusFactory::getInstance()->setStatusNoLog(this->logMouseEvent(mouseEvent));
    
}


    auto CanvasJPanel::mouseExited(java::awt::event::MouseEvent* mouseEvent) -> void{
StatusFactory::getInstance()->setStatusNoLog(this->logMouseEvent(mouseEvent));
    
}


    auto CanvasJPanel::mousePressed(java::awt::event::MouseEvent* mouseEvent) -> void{
StatusFactory::getInstance()->setStatusNoLog(MouseStrings::getInstance()->MOUSE_PRESSED_LABEL +this->logMouseEvent(mouseEvent));
    

                        if(this->getSelectedTool() != 
                                    nullptr
                                )
                        
                                    {
                                    
    GraphicItemInterface* graphicItem = this->getSelectedTool();;
    
graphicItem->mousePressed(mouseEvent, this->getXPixelsPerWorkAreaPixel(), this->getYPixelsPerWorkAreaPixel());
    

                                    }
                                
this->requestFocus();
    
this->grid->isChanged= true;
    
this->repaint();
    
}


    auto CanvasJPanel::mouseReleased(java::awt::event::MouseEvent* mouseEvent) -> void{
StatusFactory::getInstance()->setStatusNoLog(MouseStrings::getInstance()->MOUSE_RELEASED_LABEL +this->logMouseEvent(mouseEvent));
    

    GraphicItemInterface* graphicItem = this->getSelectedTool();;
    

                        if(graphicItem != 
                                    nullptr
                                )
                        
                                    {
                                    graphicItem->mouseReleased(mouseEvent, this->getXPixelsPerWorkAreaPixel(), this->getYPixelsPerWorkAreaPixel());
    

                                    }
                                
this->requestFocus();
    
this->grid->isChanged= true;
    
this->repaint();
    
}


    auto CanvasJPanel::mouseDragged(java::awt::event::MouseEvent* mouseEvent) -> void{
StatusFactory::getInstance()->setStatusNoLog(MouseStrings::getInstance()->MOUSE_DRAGGED_LABEL +this->logMouseEvent(mouseEvent));
    

    GraphicItemInterface* graphicItem = this->getSelectedTool();;
    

                        if(graphicItem != 
                                    nullptr
                                )
                        
                                    {
                                    graphicItem->mouseDragged(mouseEvent, this->getXPixelsPerWorkAreaPixel(), this->getYPixelsPerWorkAreaPixel());
    

                                    }
                                
this->requestFocus();
    
this->grid->isChanged= true;
    
this->repaint();
    
}


    auto CanvasJPanel::mouseMoved(java::awt::event::MouseEvent* mouseEvent) -> void{
StatusFactory::getInstance()->setStatusNoLog(MouseStrings::getInstance()->MOUSE_MOVED_LABEL +this->logMouseEvent(mouseEvent));
    

                        if(this->getSelectedTool() != 
                                    nullptr
                                 && this->getSelectedTool()->isActive())
                        
                                    {
                                    
    GraphicItemInterface* graphicItem = this->getSelectedTool();;
    
graphicItem->mouseMoved(mouseEvent, this->getXPixelsPerWorkAreaPixel(), this->getYPixelsPerWorkAreaPixel());
    

                                    }
                                
this->requestFocus();
    
this->grid->isChanged= true;
    
this->repaint();
    
}


    auto CanvasJPanel::logMouseEvent(java::awt::event::MouseEvent* mouseEvent) -> std::string{

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append(PositionStrings::getInstance()->X_LABEL);
    
stringBuffer->appendint(mouseEvent->getX() /this->getXPixelsPerWorkAreaPixel());
    
stringBuffer->append(CommonSeps::getInstance()->SPACE);
    
stringBuffer->append(PositionStrings::getInstance()->Y_LABEL);
    
stringBuffer->appendint(mouseEvent->getY() /this->getYPixelsPerWorkAreaPixel());
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer->toString();;
    
}


    auto CanvasJPanel::keyPressed(java::awt::event::KeyEvent* keyEvent) -> void{
StatusFactory::getInstance()->setStatus("Key Pressed");
    

        try {
            
    std::vector<Object*> graphicItemArray = this->graphicItemHashMap->keys().();;
    

    int32_t size = graphicItemArray.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    GraphicItemInterface* graphicItemInterface = dynamic_cast<GraphicItemInterface*>(this->graphicItemHashMap->get(graphicItemArray[index]));;
    

    int32_t keyCode = keyEvent->getKeyCode();;
    

                        if(graphicItemInterface->isActive())
                        
                                    {
                                    
                        if(keyCode == keyEvent->VK_UP)
                        
                                    {
                                    graphicItemInterface->translate(0,  -1);
    

                                    }
                                
                             else 
                        if(keyCode == keyEvent->VK_DOWN)
                        
                                    {
                                    graphicItemInterface->translate(0, 1);
    

                                    }
                                
                             else 
                        if(keyCode == keyEvent->VK_LEFT)
                        
                                    {
                                    graphicItemInterface->translate( -1, 0);
    

                                    }
                                
                             else 
                        if(keyCode == keyEvent->VK_RIGHT)
                        
                                    {
                                    graphicItemInterface->translate(1, 0);
    

                                    }
                                

                                    }
                                
}


                //: 
} catch(Exception& e) 
            {

    CommonStrings* commonStrings = CommonStrings::getInstance();;
    
this->logUtil->put(commonStrings->EXCEPTION, this, this->gameInputStrings->KEY_PRESSED, &e);
    
}


                        if(this->getSelectedTool() != 
                                    nullptr
                                 && this->getSelectedTool()->isActive())
                        
                                    {
                                    StatusFactory::getInstance()->setStatus("Key Pressed for Tool");
    

    GraphicItemInterface* graphicItem = this->getSelectedTool();;
    
graphicItem->keyPressed(keyEvent);
    

                                    }
                                
                        else {
                            this->setNewTool();
    

                        }
                            
this->grid->isChanged= true;
    
this->repaint();
    
}


    auto CanvasJPanel::keyReleased(java::awt::event::KeyEvent* keyEvent) -> void{
}


    auto CanvasJPanel::keyTyped(java::awt::event::KeyEvent* keyEvent) -> void{
}


    auto CanvasJPanel::delete_(MyGraphicItemEvent* evt) -> void{
this->getGraphicItemHashMap()->remove(evt->getTreeNode());
    
this->workAreaJTreeJPanel->updateTree();
    
this->workAreaJTreeJPanel->expand();
    
this->workAreaJTreeJPanel->repaint();
    
}


    auto CanvasJPanel::deselect(MyGraphicItemEvent* evt) -> void{

    GraphicItemInterface* graphicItemInterface = dynamic_cast<GraphicItemInterface*>(this->getGraphicItemHashMap()->get(evt->getTreeNode()));;
    

                        if(graphicItemInterface != 
                                    nullptr
                                )
                        
                                    {
                                    graphicItemInterface->setColor(Color::WHITE);
    
graphicItemInterface->deactivate();
    
this->workAreaJTreeJPanel->repaint();
    

                                    }
                                
}


    auto CanvasJPanel::highlight(MyGraphicItemEvent* evt) -> void{

    GraphicItemInterface* graphicItemInterface = dynamic_cast<GraphicItemInterface*>(this->getGraphicItemHashMap()->get(evt->getTreeNode()));;
    

                        if(graphicItemInterface != 
                                    nullptr
                                )
                        
                                    {
                                    graphicItemInterface->setColor(Color::YELLOW);
    
graphicItemInterface->activate();
    
this->workAreaJTreeJPanel->repaint();
    

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    auto CanvasJPanel::duplicate() -> CanvasJPanel*{

    CanvasJPanel* newCanvasJPanel = new CanvasJPanel(this->workAreaJTreeJPanel, this->getSize(), this->getCanvasDimension()->getWidth(), this->getCanvasDimension()->getHeight());;
    
newCanvasJPanel->setGrid(this->getGrid()->getGrid());
    
newCanvasJPanel->setAngle(this->getAngle());
    
newCanvasJPanel->duplicateGraphicItemHashMap(this->getGraphicItemHashMap());
    
this->workAreaJTreeJPanel->updateTree();
    
this->workAreaJTreeJPanel->expand();
    
this->workAreaJTreeJPanel->repaint();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return newCanvasJPanel;
    
}


                //@Throws(Exception.constructor)
            
    auto CanvasJPanel::duplicate(MyGraphicItemEvent* event) -> void{

    MutableTreeNode* treeNode = event->getTreeNode();;
    

    GraphicItemInterface* graphicItem = dynamic_cast<GraphicItemInterface*>(this->getGraphicItemHashMap()->get(treeNode));;
    

                        if(graphicItem != 
                                    nullptr
                                )
                        
                                    {
                                    this->duplicateGraphicItem(graphicItem);
    
this->workAreaJTreeJPanel->updateTree();
    
this->workAreaJTreeJPanel->expand();
    
this->workAreaJTreeJPanel->repaint();
    

                                    }
                                
}


    auto CanvasJPanel::rotate(MyGraphicItemEvent* event) -> void{

    MutableTreeNode* treeNode = event->getTreeNode();;
    

    GraphicItemInterface* graphicItem = dynamic_cast<GraphicItemInterface*>(this->getGraphicItemHashMap()->get(treeNode));;
    

                        if(graphicItem != 
                                    nullptr
                                )
                        
                                    {
                                    graphicItem->addAngle(event->getAngle());
    

                                    }
                                
}


    auto CanvasJPanel::getCanvasDimension() -> IntegerDimension*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->canvasDimension;
    
}


    auto CanvasJPanel::setCanvasDimension(IntegerDimension* canvasDimension) -> void{
this->canvasDimension= canvasDimension;
    
}


    auto CanvasJPanel::getGrid() -> Grid*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->grid;
    
}




        #endif //ORG_ALLBINARY_GRAPHICS_J2ME_WORKAREA_CANVAS_CANVASJPANEL_CPP
