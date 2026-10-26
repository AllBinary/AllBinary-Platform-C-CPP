
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
        #include "JPanel.h"
#include "MouseListener.h"
#include "MouseMotionListener.h"
#include "KeyListener.h"
#include "IntegerDimension.h"
#include "CanvasTreeLabel.h"
#include "Color.h"
#include "Grid.h"
#include "Dimension.h"
#include "CanvasDom.h"
#include "GridLayout.h"
#include "Graphics.h"
#include "MouseEvent.h"
#include "KeyEvent.h"

class CanvasJPanel: public javax::swing::JPanel, public java::awt::event::MouseListener, public java::awt::event::MouseMotionListener, public java::awt::event::KeyListener, public MyGraphicItemEventListener {

    private: static int32_t frame = 0;

    private: static const Color gridColor = Color(BasicColorFactory::getInstance().WHITE.intValue());

    private: static const Color backgroundColor = Color(BasicColorFactory::getInstance().CLEAR_COLOR.intValue());

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: const GuiLog guiLog = GuiLog::getInstance();

    private: const GameInputStrings gameInputStrings = GameInputStrings::getInstance();

    private: GraphicItemInterface selectedTool = 
                null
            ;

    private: HashMap<Object*, Object*> graphicItemHashMap;

    private: IntegerDimension canvasDimension;

    private: double angle = 0;

    private: DefaultMutableTreeNode canvasTreeNode;

    private: CanvasTreeLabel frameLabel;

    private: WorkAreaJTreeJPanel workAreaJTreeJPanel;

    private: Grid grid;

public: CanvasJPanel(WorkAreaJTreeJPanel workAreaJTreeJPanel, Dimension dimension, int32_t x, int32_t y){
this->grid= Grid();
    

        try {
            this->workAreaJTreeJPanel= workAreaJTreeJPanel;
    
this->initComponents();
    
this->initMyComponents();
    
this->setSize(dimension);
    
this->setCanvasSize(x, y);
    

                //: 
} catch(e) 
            {

                        if(LOGGING::contains(LOGGING::GRAPHICSCREATION))
                        
                                    {
                                    this->guiLog.put("Constructor Error", this, "contructor", e);
    

                                    }
                                
}

}


public: CanvasJPanel(WorkAreaJTreeJPanel workAreaJTreeJPanel, Dimension dimension, CanvasDom canvasDom){
this->grid= Grid(canvasDom.getGrid());
    

        try {
            this->workAreaJTreeJPanel= workAreaJTreeJPanel;
    
this->initComponents();
    
this->initMyComponents();
    
this->setSize(dimension);
    
this->setCanvasSize(canvasDom.getDimension().getWidth(), canvasDom.getDimension().getHeight());
    
this->graphicItemHashMap= canvasDom.getGraphicItemHashMap();
    

    std::vector<Object*> graphicItemArray = this->graphicItemHashMap.keys().();;
    

    int32_t size = graphicItemArray.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    MutableTreeNode graphicItemTreeNode = graphicItemArray[index];;
    
this->canvasTreeNode.add(graphicItemTreeNode);
    
}

this->repaint();
    
this->setAngle(canvasDom.getAngle());
    
this->workAreaJTreeJPanel.updateTree();
    
this->workAreaJTreeJPanel.expand();
    
this->workAreaJTreeJPanel.repaint();
    

                //: 
} catch(e) 
            {

                        if(LOGGING::contains(LOGGING::GRAPHICSCREATION))
                        
                                    {
                                    this->guiLog.put("Constructor Error", this, "contructor", e);
    

                                    }
                                
}

}


                //@Throws(Exception.constructor)
            
    private: void initMyComponents(){
this->frameLabel= CanvasTreeLabel("FrameLabel" +Integer(CanvasJPanel::frame).toString());
    
this->canvasTreeNode= DefaultMutableTreeNode(this->frameLabel);
    
CanvasJPanel::frame++;
    
this->workAreaJTreeJPanel.add(this->getTreeNode());
    
this->graphicItemHashMap= StdUtil::getInstance().createHashMap();
    
this->grid.grid= PointFactory::getInstance().createXY(0, 0);
    
this->setCanvasDimension(IntegerDimension(0, 0));
    
this->selectedTool= 
                                        nullptr
                                    ;
    
this->addKeyListener(this);
    
this->addMouseListener(this);
    
this->addMouseMotionListener(this);
    
MyGraphicItemEventService::addListener(this);
    
}


    public: MutableTreeNode getTreeNode(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->canvasTreeNode;
    
}


    private: void initComponents(){
setLayout(java::awt::GridLayout(1, 1));
    
}


                //@Throws(Exception.constructor)
            
    public: void setCanvasSize(int32_t x, int32_t y){
this->grid.isGridPossible= true;
    

                        if(x <= 0)
                        
                                    {
                                    this->grid.isGridPossible= false;
    



                            throw GraphicsException("X Size Error: " +x, this, "setWorkAreaSize");
                    

                                    }
                                

                        if(y <= 0)
                        
                                    {
                                    this->grid.isGridPossible= false;
    



                            throw GraphicsException("Y Size Error: " +y, this, "setWorkAreaSize");
                    

                                    }
                                

                        if(x > this->getWidth())
                        
                                    {
                                    this->grid.isGridPossible= false;
    

                                    }
                                

                        if(y > this->getHeight())
                        
                                    {
                                    this->grid.isGridPossible= false;
    

                                    }
                                
this->setCanvasDimension(IntegerDimension(x, y));
    
this->grid.isChanged= true;
    
}


    public: void setGrid(GPoint point){
this->setGrid(point.getX(), point.getY());
    
}


    public: void setGrid(int32_t xSize, int32_t ySize){

        try {
            
                        if(xSize >= getCanvasDimension().getWidth() /2 || xSize < 1)
                        
                                    {
                                    


                            throw GraphicsException("X Size Error: " +xSize +" WorkArea X: " +getCanvasDimension().getWidth(), this, "setGrid");
                    

                                    }
                                

                        if(ySize >= getCanvasDimension().getHeight() /2 || ySize < 1)
                        
                                    {
                                    


                            throw GraphicsException("Y Size Error" +ySize +" WorkArea Y: " +getCanvasDimension().getHeight(), this, "setGrid");
                    

                                    }
                                
this->grid.grid= PointFactory::getInstance().createXY(xSize, ySize);
    
this->grid.isChanged= true;
    

                //: 
} catch(e) 
            {
}

}


                //@Throws(Exception.constructor)
            
    public: void setDefaultGrid(){

    int32_t xPixelsPerWorkAreaPixel = this->getWidth() /this->getCanvasDimension().getWidth();;
    

    int32_t yPixelsPerWorkAreaPixel = this->getHeight() /this->getCanvasDimension().getHeight();;
    
this->setGrid(1, 1);
    
this->grid.isChanged= true;
    
}


    public: double getAngle(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->angle;
    
}


    public: void setAngle(double angle){
this->angle= angle;
    
}


    public: void addAngle(double angle){
this->setAngle(this->angle +angle);
    
}


    public: void explodeAll(){

    BasicArrayList newPoints = BasicArrayListD();;
    

    std::vector<Object*> graphicItemArray = this->getGraphicItemHashMap().keys().();;
    

    int32_t size = graphicItemArray.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    MutableTreeNode graphicItemNode = graphicItemArray[index];;
    

    GraphicItemInterface graphicItem = this->getGraphicItemHashMap().get(graphicItemNode);;
    

                        if(graphicItem.getName() == LinesGraphicItem::getStaticName())
                        
                                    {
                                    
        while(graphicItem.getPointsInterface().getSize() > 2)
        {

    GraphicItemInterface newGraphicItem = GraphicItemFactory::getInstance().getInstance(graphicItem.getName()).getInstance(this);;
    

    GPoint pointOne = GPoint::getInstance(graphicItem.removePoint());;
    

    GPoint pointTwo = GPoint::getInstance(graphicItem.removePoint());;
    

                        if(pointOne != 
                                    nullptr
                                 && pointTwo != 
                                    nullptr
                                )
                        
                                    {
                                    newGraphicItem.addPoint(pointOne);
    
newGraphicItem.addPoint(pointTwo);
    

                                    }
                                
newPoints.add(newGraphicItem);
    
}


                                    }
                                
}


    int32_t size2 = newPoints.size();;
    




                        for (
    int32_t index = 0;index < size2; index++)
        {

    GraphicItemInterface newGraphicItem = newPoints.get(index);;
    
this->canvasTreeNode.add(newGraphicItem.getTreeNode());
    
this->getGraphicItemHashMap().put(newGraphicItem.getTreeNode(), newGraphicItem);
    
}

this->workAreaJTreeJPanel.updateTree();
    
this->workAreaJTreeJPanel.expand();
    
this->workAreaJTreeJPanel.repaint();
    
}


                //@Throws(Exception.constructor)
            
    public: void explode(int32_t howMuch, int32_t explosionType){

    std::vector<Object*> graphicItemArray = this->getGraphicItemHashMap().keys().();;
    

    int32_t size = graphicItemArray.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    GraphicItemInterface item = this->getGraphicItemHashMap().get(graphicItemArray[index]);;
    

    BasicArrayList basicArrayList = VectorExplosionGenerator::getInstance().createList(item.getPointsInterface().getPoints(), howMuch, VectorExplosionGenerator::getInstance().RANDOM);;
    

    Points newPoints = Points();;
    
newPoints.addPoints(basicArrayList);
    
item.setPointsInterface(newPoints);
    

    int32_t angleDelta = RandomRotationFactory::getInstance().getNextRandomAngle(howMuch);;
    
item.setAngle(angleDelta);
    
}

this->repaint();
    
}


                //@Throws(Exception.constructor)
            
    public: void mirror(){

    int32_t width = this->getCanvasDimension().getWidth();;
    

    std::vector<Object*> graphicItemArray = this->getGraphicItemHashMap().keys().();;
    

    int32_t size = graphicItemArray.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    GraphicItemInterface item = this->getGraphicItemHashMap().get(graphicItemArray[index]);;
    

    BasicArrayList basicArrayList = VectorMirrorGenerator::getInstance().getInstance(item.getPointsInterface().getPoints(), width);;
    

    Points newPoints = Points();;
    
newPoints.addPoints(basicArrayList);
    
item.setPointsInterface(newPoints);
    
}

this->repaint();
    
}


                //@Throws(Exception.constructor)
            
    public: void center(){
VectorCenterGenerator().transform(this->getGraphicItemHashMap());
    
this->repaint();
    
}


    public: void setNewTool(){

        try {
            StatusFactory::getInstance().setStatus("Tool Selected");
    
this->selectedTool= ToolFactory::getInstance().getSelectedToolFactory().getInstance(this);
    

    MutableTreeNode newNode = this->selectedTool.getTreeNode();;
    
this->getGraphicItemHashMap().put(newNode, this->selectedTool);
    
this->canvasTreeNode.add(newNode);
    

                        if(this->getSelectedTool() == 
                                    nullptr
                                )
                        
                                    {
                                    


                            throw GraphicsException("No Tool Selected", this, "setSelectedTool");
                    

                                    }
                                

                //: 
} catch(e) 
            {
}

}


                //@Throws(Exception.constructor)
            
    public: void duplicateGraphicItem(GraphicItemInterface graphicItem){

    GraphicItemInterface graphicItemClone = graphicItem.duplicate();;
    
this->getGraphicItemHashMap().put(graphicItemClone.getTreeNode(), graphicItemClone);
    
this->canvasTreeNode.add(graphicItemClone.getTreeNode());
    
}


                //@Throws(Exception.constructor)
            
    public: void duplicateGraphicItemHashMap(HashMap<Object*, Object*> hashMap){

    std::vector<Object*> mutableTreeNodeArray = hashMap.keys().();;
    

    int32_t size = mutableTreeNodeArray.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    MutableTreeNode treeNode = mutableTreeNodeArray[index];;
    

    GraphicItemInterface graphicItem = hashMap.get(treeNode);;
    
this->duplicateGraphicItem(graphicItem);
    
}

}


    public: HashMap<Object*, Object*> getGraphicItemHashMap(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->graphicItemHashMap;
    
}


    public: int32_t getXPixelsPerWorkAreaPixel(){

    int32_t x = this->getGrid().grid.getX() *(this->getWidth() -10) /this->getCanvasDimension().getWidth();;
    

                        if(this->getGrid().getZoom() == 1)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return 1;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return x;
    

                        }
                            
}


    public: int32_t getYPixelsPerWorkAreaPixel(){

    int32_t y = this->getGrid().grid.getY() *(this->getHeight() -10) /this->getCanvasDimension().getHeight();;
    

                        if(this->getGrid().getZoom() == 1)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return 1;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return y;
    

                        }
                            
}


    public: GraphicItemInterface getSelectedTool(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->selectedTool;
    
}


    public: void drawItems(Graphics graphics){

    number angleDouble = number(this->angle);;
    

    std::vector<Object*> graphicItemArray = this->getGraphicItemHashMap().keys().();;
    

    int32_t size = graphicItemArray.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    GraphicItemInterface item = this->getGraphicItemHashMap().get(graphicItemArray[index]);;
    
item.paint(graphics, angleDouble, this->getCanvasDimension(), this->getXPixelsPerWorkAreaPixel(), this->getYPixelsPerWorkAreaPixel());
    
}

}


    public: void drawGrid(Graphics graphics){

    int32_t xAdjust = (this->getWidth() % this->getXPixelsPerWorkAreaPixel()) /2;;
    

    int32_t yAdjust = (this->getHeight() % this->getYPixelsPerWorkAreaPixel()) /2;;
    

    int32_t xLeft = xAdjust;;
    

    int32_t yUpper = yAdjust;;
    

    int32_t xRight = this->getWidth() -xAdjust;;
    

    int32_t yLower = this->getHeight() -yAdjust;;
    
graphics.setColor(CanvasJPanel::gridColor);
    




                        for (
    int32_t value = yAdjust;value <= this->getHeight() -yAdjust; )
        {
graphics.drawLine(xLeft, value, xRight, value);
    
}





                        for (
    int32_t value = xAdjust;value <= this->getWidth() -xAdjust; )
        {
graphics.drawLine(value, yUpper, value, yLower);
    
}

}


    public: void paint(Graphics graphics){

        try {
            
                        if(this->getGrid().isChanged)
                        
                                    {
                                    graphics.setColor(CanvasJPanel::backgroundColor);
    
graphics.fillRect(0, 0, getWidth(), getHeight());
    

                        if(this->getGrid().getZoom() > 2 && this->getGrid().isGridOn && this->getGrid().isGridPossible)
                        
                                    {
                                    this->setDefaultGrid();
    
this->drawGrid(graphics);
    

                                    }
                                
this->drawItems(graphics);
    
graphics.drawString(number(this->getAngle()).toString(), this->getWidth() -75, this->getHeight() -15);
    
this->grid.isChanged= false;
    

                                    }
                                

                //: 
} catch(e) 
            {
}

}


    public: void repaint(){

                        if(this->grid != 
                                    nullptr
                                )
                        
                                    {
                                    this->grid.isChanged= true;
    

                                    }
                                
super.repaint();
    
}


                //@Throws(Exception.constructor)
            
    public: Node toDom(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return CanvasDom(this).toDom();;
    
}


    public: void changed(){
this->grid.isChanged= true;
    
}


    public: void mouseClicked(java::awt::event::MouseEvent mouseEvent){
StatusFactory::getInstance().setStatusNoLog(MouseStrings::getInstance().MOUSE_CLICKED_LABEL +this->logMouseEvent(mouseEvent));
    

                        if(this->getSelectedTool() != 
                                    nullptr
                                 && this->getSelectedTool().isActive())
                        
                                    {
                                    
    GraphicItemInterface graphicItem = this->getSelectedTool();;
    
graphicItem.mouseClicked(mouseEvent, this->getXPixelsPerWorkAreaPixel(), this->getYPixelsPerWorkAreaPixel());
    

                                    }
                                
                        else {
                            this->setNewTool();
    

    GraphicItemInterface graphicItem = this->getSelectedTool();;
    

                        if(graphicItem != 
                                    nullptr
                                )
                        
                                    {
                                    graphicItem.mouseClicked(mouseEvent, this->getXPixelsPerWorkAreaPixel(), this->getYPixelsPerWorkAreaPixel());
    

                                    }
                                

                        }
                            
this->grid.isChanged= true;
    
this->repaint();
    
this->workAreaJTreeJPanel.updateTree();
    
this->workAreaJTreeJPanel.expand();
    
this->workAreaJTreeJPanel.repaint();
    
}


    public: void mouseEntered(java::awt::event::MouseEvent mouseEvent){
StatusFactory::getInstance().setStatusNoLog(this->logMouseEvent(mouseEvent));
    
}


    public: void mouseExited(java::awt::event::MouseEvent mouseEvent){
StatusFactory::getInstance().setStatusNoLog(this->logMouseEvent(mouseEvent));
    
}


    public: void mousePressed(java::awt::event::MouseEvent mouseEvent){
StatusFactory::getInstance().setStatusNoLog(MouseStrings::getInstance().MOUSE_PRESSED_LABEL +this->logMouseEvent(mouseEvent));
    

                        if(this->getSelectedTool() != 
                                    nullptr
                                )
                        
                                    {
                                    
    GraphicItemInterface graphicItem = this->getSelectedTool();;
    
graphicItem.mousePressed(mouseEvent, this->getXPixelsPerWorkAreaPixel(), this->getYPixelsPerWorkAreaPixel());
    

                                    }
                                
this->requestFocus();
    
this->grid.isChanged= true;
    
this->repaint();
    
}


    public: void mouseReleased(java::awt::event::MouseEvent mouseEvent){
StatusFactory::getInstance().setStatusNoLog(MouseStrings::getInstance().MOUSE_RELEASED_LABEL +this->logMouseEvent(mouseEvent));
    

    GraphicItemInterface graphicItem = this->getSelectedTool();;
    

                        if(graphicItem != 
                                    nullptr
                                )
                        
                                    {
                                    graphicItem.mouseReleased(mouseEvent, this->getXPixelsPerWorkAreaPixel(), this->getYPixelsPerWorkAreaPixel());
    

                                    }
                                
this->requestFocus();
    
this->grid.isChanged= true;
    
this->repaint();
    
}


    public: void mouseDragged(java::awt::event::MouseEvent mouseEvent){
StatusFactory::getInstance().setStatusNoLog(MouseStrings::getInstance().MOUSE_DRAGGED_LABEL +this->logMouseEvent(mouseEvent));
    

    GraphicItemInterface graphicItem = this->getSelectedTool();;
    

                        if(graphicItem != 
                                    nullptr
                                )
                        
                                    {
                                    graphicItem.mouseDragged(mouseEvent, this->getXPixelsPerWorkAreaPixel(), this->getYPixelsPerWorkAreaPixel());
    

                                    }
                                
this->requestFocus();
    
this->grid.isChanged= true;
    
this->repaint();
    
}


    public: void mouseMoved(java::awt::event::MouseEvent mouseEvent){
StatusFactory::getInstance().setStatusNoLog(MouseStrings::getInstance().MOUSE_MOVED_LABEL +this->logMouseEvent(mouseEvent));
    

                        if(this->getSelectedTool() != 
                                    nullptr
                                 && this->getSelectedTool().isActive())
                        
                                    {
                                    
    GraphicItemInterface graphicItem = this->getSelectedTool();;
    
graphicItem.mouseMoved(mouseEvent, this->getXPixelsPerWorkAreaPixel(), this->getYPixelsPerWorkAreaPixel());
    

                                    }
                                
this->requestFocus();
    
this->grid.isChanged= true;
    
this->repaint();
    
}


    private: std::string logMouseEvent(java::awt::event::MouseEvent mouseEvent){

    StringMaker stringBuffer = StringMaker();;
    
stringBuffer.append(PositionStrings::getInstance().X_LABEL);
    
stringBuffer.appendint(mouseEvent.getX() /this->getXPixelsPerWorkAreaPixel());
    
stringBuffer.append(CommonSeps::getInstance().SPACE);
    
stringBuffer.append(PositionStrings::getInstance().Y_LABEL);
    
stringBuffer.appendint(mouseEvent.getY() /this->getYPixelsPerWorkAreaPixel());
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer.toString();;
    
}


    public: void keyPressed(java::awt::event::KeyEvent keyEvent){
StatusFactory::getInstance().setStatus("Key Pressed");
    

        try {
            
    std::vector<Object*> graphicItemArray = this->graphicItemHashMap.keys().();;
    

    int32_t size = graphicItemArray.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    GraphicItemInterface graphicItemInterface = this->graphicItemHashMap.get(graphicItemArray[index]);;
    

    int32_t keyCode = keyEvent.getKeyCode();;
    

                        if(graphicItemInterface.isActive())
                        
                                    {
                                    
                        if(keyCode == keyEvent.VK_UP)
                        
                                    {
                                    graphicItemInterface.translate(0,  -1);
    

                                    }
                                
                             else 
                        if(keyCode == keyEvent.VK_DOWN)
                        
                                    {
                                    graphicItemInterface.translate(0, 1);
    

                                    }
                                
                             else 
                        if(keyCode == keyEvent.VK_LEFT)
                        
                                    {
                                    graphicItemInterface.translate( -1, 0);
    

                                    }
                                
                             else 
                        if(keyCode == keyEvent.VK_RIGHT)
                        
                                    {
                                    graphicItemInterface.translate(1, 0);
    

                                    }
                                

                                    }
                                
}


                //: 
} catch(e) 
            {

    CommonStrings commonStrings = CommonStrings::getInstance();;
    
this->logUtil.put(commonStrings.EXCEPTION, this, this->gameInputStrings.KEY_PRESSED, e);
    
}


                        if(this->getSelectedTool() != 
                                    nullptr
                                 && this->getSelectedTool().isActive())
                        
                                    {
                                    StatusFactory::getInstance().setStatus("Key Pressed for Tool");
    

    GraphicItemInterface graphicItem = this->getSelectedTool();;
    
graphicItem.keyPressed(keyEvent);
    

                                    }
                                
                        else {
                            this->setNewTool();
    

                        }
                            
this->grid.isChanged= true;
    
this->repaint();
    
}


    public: void keyReleased(java::awt::event::KeyEvent keyEvent){
}


    public: void keyTyped(java::awt::event::KeyEvent keyEvent){
}


    public: void delete_(MyGraphicItemEvent evt){
this->getGraphicItemHashMap().remove(evt.getTreeNode());
    
this->workAreaJTreeJPanel.updateTree();
    
this->workAreaJTreeJPanel.expand();
    
this->workAreaJTreeJPanel.repaint();
    
}


    public: void deselect(MyGraphicItemEvent evt){

    GraphicItemInterface graphicItemInterface = this->getGraphicItemHashMap().get(evt.getTreeNode());;
    

                        if(graphicItemInterface != 
                                    nullptr
                                )
                        
                                    {
                                    graphicItemInterface.setColor(Color::WHITE);
    
graphicItemInterface.deactivate();
    
this->workAreaJTreeJPanel.repaint();
    

                                    }
                                
}


    public: void highlight(MyGraphicItemEvent evt){

    GraphicItemInterface graphicItemInterface = this->getGraphicItemHashMap().get(evt.getTreeNode());;
    

                        if(graphicItemInterface != 
                                    nullptr
                                )
                        
                                    {
                                    graphicItemInterface.setColor(Color::YELLOW);
    
graphicItemInterface.activate();
    
this->workAreaJTreeJPanel.repaint();
    

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    public: CanvasJPanel duplicate(){

    CanvasJPanel newCanvasJPanel = CanvasJPanel(this->workAreaJTreeJPanel, this->getSize(), this->getCanvasDimension().getWidth(), this->getCanvasDimension().getHeight());;
    
newCanvasJPanel.setGrid(this->getGrid().getGrid());
    
newCanvasJPanel.setAngle(this->getAngle());
    
newCanvasJPanel.duplicateGraphicItemHashMap(this->getGraphicItemHashMap());
    
this->workAreaJTreeJPanel.updateTree();
    
this->workAreaJTreeJPanel.expand();
    
this->workAreaJTreeJPanel.repaint();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return newCanvasJPanel;
    
}


                //@Throws(Exception.constructor)
            
    public: void duplicate(MyGraphicItemEvent event){

    MutableTreeNode treeNode = event.getTreeNode();;
    

    GraphicItemInterface graphicItem = this->getGraphicItemHashMap().get(treeNode);;
    

                        if(graphicItem != 
                                    nullptr
                                )
                        
                                    {
                                    this->duplicateGraphicItem(graphicItem);
    
this->workAreaJTreeJPanel.updateTree();
    
this->workAreaJTreeJPanel.expand();
    
this->workAreaJTreeJPanel.repaint();
    

                                    }
                                
}


    public: void rotate(MyGraphicItemEvent event){

    MutableTreeNode treeNode = event.getTreeNode();;
    

    GraphicItemInterface graphicItem = this->getGraphicItemHashMap().get(treeNode);;
    

                        if(graphicItem != 
                                    nullptr
                                )
                        
                                    {
                                    graphicItem.addAngle(event.getAngle());
    

                                    }
                                
}


    public: IntegerDimension getCanvasDimension(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->canvasDimension;
    
}


    public: void setCanvasDimension(IntegerDimension canvasDimension){
this->canvasDimension= canvasDimension;
    
}


    public: Grid getGrid(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->grid;
    
}


};

            

