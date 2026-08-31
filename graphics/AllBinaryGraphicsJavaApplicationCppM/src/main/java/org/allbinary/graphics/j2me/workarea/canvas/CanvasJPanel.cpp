
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
        



            #include "../../../../../../java/lang/Exception.h"
        
            #include "../../../../../../java/lang/Integer.h"
        
            #include "../../../../../../java/lang/Double.h"
        
#include <java/awt.h>

      
#include <java/util/HashMap.h>

      
#include <java/util/Vector.h>

      
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

      
#include <org/allbinary/logic/communication/log/GuiLog.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/math/PositionStrings.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
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

class CanvasJPanel: public javax.swing.JPanel: public java.awt.event.MouseListener, public java.awt.event.MouseMotionListener, public java.awt.event.KeyListener, public MyGraphicItemEventListener {
        

    private: static frame: int32_t = 0;

    private: static const gridColor: Color = new Color(BasicColorFactory.getInstance()!.WHITE.intValue());

    private: static const backgroundColor: Color = new Color(BasicColorFactory.getInstance()!.CLEAR_COLOR.intValue());

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const guiLog: GuiLog = GuiLog.getInstance()!;

    private: const gameInputStrings: GameInputStrings = GameInputStrings.getInstance()!;

    private: selectedTool: GraphicItemInterface = 
                null
            ;

    private: graphicItemHashMap: HashMap<any, any>;

    private: canvasDimension: IntegerDimension;

    private: angle: double = 0;

    private: canvasTreeNode: DefaultMutableTreeNode;

    private: frameLabel: CanvasTreeLabel;

    private: workAreaJTreeJPanel: WorkAreaJTreeJPanel;

    private: const grid: Grid;

public constructor (WorkAreaJTreeJPanel workAreaJTreeJPanel, Dimension dimension, int32_t x, int32_t y){

            super();
        this.grid= new Grid();
    

        try {
            this.workAreaJTreeJPanel= workAreaJTreeJPanel;
    
this.initComponents();
    
this.initMyComponents();
    
this.setSize(dimension);
    
this.setCanvasSize(x, y);
    

                //: 
} catch(e) 
            {

                        if(LOGGING.contains(LOGGING.GRAPHICSCREATION))
                        
                                    {
                                    this.guiLog!.put("Constructor Error", this, "contructor", e);
    

                                    }
                                
}

}


public constructor (WorkAreaJTreeJPanel workAreaJTreeJPanel, Dimension dimension, CanvasDom canvasDom){

            super();
        this.grid= new Grid(canvasDom!.getGrid());
    

        try {
            this.workAreaJTreeJPanel= workAreaJTreeJPanel;
    
this.initComponents();
    
this.initMyComponents();
    
this.setSize(dimension);
    
this.setCanvasSize(canvasDom!.getDimension()!.getWidth(), canvasDom!.getDimension()!.getHeight());
    
this.graphicItemHashMap= canvasDom!.getGraphicItemHashMap();
    

    graphicItemArray: std::vector<any> = this.graphicItemHashMap!.keys().()!;;
    

    size: int32_t = graphicItemArray!.length
                ;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {

    graphicItemTreeNode: MutableTreeNode = graphicItemArray[index]! as MutableTreeNode;;
    
this.canvasTreeNode!.add(graphicItemTreeNode);
    
}

this.repaint();
    
this.setAngle(canvasDom!.getAngle());
    
this.workAreaJTreeJPanel!.updateTree();
    
this.workAreaJTreeJPanel!.expand();
    
this.workAreaJTreeJPanel!.repaint();
    

                //: 
} catch(e) 
            {

                        if(LOGGING.contains(LOGGING.GRAPHICSCREATION))
                        
                                    {
                                    this.guiLog!.put("Constructor Error", this, "contructor", e);
    

                                    }
                                
}

}


                //@Throws(Exception.constructor)
            
    initMyComponents(){
this.frameLabel= new CanvasTreeLabel("FrameLabel" +new Integer(CanvasJPanel.frame).toString());
    
this.canvasTreeNode= new DefaultMutableTreeNode(this.frameLabel);
    
CanvasJPanel.frame++;
    
this.workAreaJTreeJPanel!.add(this.getTreeNode());
    
this.graphicItemHashMap= new HashMap<any, any>();
    
this.grid.grid= PointFactory.getInstance()!.createXY(0, 0);
    
this.setCanvasDimension(new IntegerDimension(0, 0));
    
this.selectedTool= 
                                        nullptr
                                    ;
    
this.addKeyListener(this);
    
this.addMouseListener(this);
    
this.addMouseMotionListener(this);
    
MyGraphicItemEventService.addListener(this);
    
}


    public MutableTreeNode getTreeNode(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.canvasTreeNode;
    
}


    initComponents(){
setLayout(new java.awt.GridLayout(1, 1));
    
}


                //@Throws(Exception.constructor)
            
    public setCanvasSize(int32_t x, int32_t y){
this.grid.isGridPossible= true;
    

                        if(x <= 0)
                        
                                    {
                                    this.grid.isGridPossible= false;
    



                            throw new GraphicsException("X Size Error: " +x, this, "setWorkAreaSize");
                    

                                    }
                                

                        if(y <= 0)
                        
                                    {
                                    this.grid.isGridPossible= false;
    



                            throw new GraphicsException("Y Size Error: " +y, this, "setWorkAreaSize");
                    

                                    }
                                

                        if(x > this.getWidth())
                        
                                    {
                                    this.grid.isGridPossible= false;
    

                                    }
                                

                        if(y > this.getHeight())
                        
                                    {
                                    this.grid.isGridPossible= false;
    

                                    }
                                
this.setCanvasDimension(new IntegerDimension(x, y));
    
this.grid.isChanged= true;
    
}


    public setGrid(GPoint point){
this.setGrid(point.getX(), point.getY());
    
}


    public setGrid(int32_t xSize, int32_t ySize){

        try {
            
                        if(xSize >= getCanvasDimension()!.getWidth() /2 || xSize < 1)
                        
                                    {
                                    


                            throw new GraphicsException("X Size Error: " +xSize +" WorkArea X: " +getCanvasDimension()!.getWidth(), this, "setGrid");
                    

                                    }
                                

                        if(ySize >= getCanvasDimension()!.getHeight() /2 || ySize < 1)
                        
                                    {
                                    


                            throw new GraphicsException("Y Size Error" +ySize +" WorkArea Y: " +getCanvasDimension()!.getHeight(), this, "setGrid");
                    

                                    }
                                
this.grid.grid= PointFactory.getInstance()!.createXY(xSize, ySize);
    
this.grid.isChanged= true;
    

                //: 
} catch(e) 
            {
}

}


                //@Throws(Exception.constructor)
            
    public setDefaultGrid(){

    xPixelsPerWorkAreaPixel: int32_t = this.getWidth() /this.getCanvasDimension()!.getWidth();;
    

    yPixelsPerWorkAreaPixel: int32_t = this.getHeight() /this.getCanvasDimension()!.getHeight();;
    
this.setGrid(1, 1);
    
this.grid.isChanged= true;
    
}


    public double getAngle(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.angle;
    
}


    public setAngle(double angle){
this.angle= angle;
    
}


    public addAngle(double angle){
this.setAngle(this.angle +angle);
    
}


    public explodeAll(){

    newPoints: Vector = new Vector();;
    

    graphicItemArray: std::vector<any> = this.getGraphicItemHashMap()!.keys().()!;;
    

    size: int32_t = graphicItemArray!.length
                ;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {

    graphicItemNode: MutableTreeNode = graphicItemArray[index]! as MutableTreeNode;;
    

    graphicItem: GraphicItemInterface = this.getGraphicItemHashMap()!.get(graphicItemNode) as GraphicItemInterface;;
    

                        if(graphicItem!.getName() == LinesGraphicItem.getStaticName())
                        
                                    {
                                    
        while(graphicItem!.getPointsInterface()!.getSize() > 2)
        {

    newGraphicItem: GraphicItemInterface = GraphicItemFactory.getInstance()!.getInstance(graphicItem!.getName())!.getInstance(this)!;;
    

    pointOne: GPoint = GPoint.getInstance(graphicItem!.removePoint())!;;
    

    pointTwo: GPoint = GPoint.getInstance(graphicItem!.removePoint())!;;
    

                        if(pointOne != 
                                    null
                                 && pointTwo != 
                                    null
                                )
                        
                                    {
                                    newGraphicItem!.addPoint(pointOne);
    
newGraphicItem!.addPoint(pointTwo);
    

                                    }
                                
newPoints!.add(newGraphicItem);
    
}


                                    }
                                
}


    size2: int32_t = newPoints!.length!;;
    




                        for (
    index: int32_t = 0;index < size2; index++)
        {

    newGraphicItem: GraphicItemInterface = newPoints!.get(index) as GraphicItemInterface;;
    
this.canvasTreeNode!.add(newGraphicItem!.getTreeNode());
    
this.getGraphicItemHashMap()!.put(newGraphicItem!.getTreeNode(), newGraphicItem);
    
}

this.workAreaJTreeJPanel!.updateTree();
    
this.workAreaJTreeJPanel!.expand();
    
this.workAreaJTreeJPanel!.repaint();
    
}


                //@Throws(Exception.constructor)
            
    public explode(int32_t howMuch, int32_t explosionType){

    graphicItemArray: std::vector<any> = this.getGraphicItemHashMap()!.keys().()!;;
    

    size: int32_t = graphicItemArray!.length
                ;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {

    item: GraphicItemInterface = this.getGraphicItemHashMap()!.get(graphicItemArray[index]!) as GraphicItemInterface;;
    

    basicArrayList: BasicArrayList = VectorExplosionGenerator.getInstance()!.createList(item.getPointsInterface()!.getPoints(), howMuch, VectorExplosionGenerator.getInstance()!.RANDOM)!;;
    

    newPoints: Points = new Points();;
    
newPoints!.addPoints(basicArrayList);
    
item.setPointsInterface(newPoints);
    

    angleDelta: int32_t = RandomRotationFactory.getInstance()!.getNextRandomAngle(howMuch)!;;
    
item.setAngle(angleDelta);
    
}

this.repaint();
    
}


                //@Throws(Exception.constructor)
            
    public mirror(){

    width: int32_t = this.getCanvasDimension()!.getWidth()!;;
    

    graphicItemArray: std::vector<any> = this.getGraphicItemHashMap()!.keys().()!;;
    

    size: int32_t = graphicItemArray!.length
                ;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {

    item: GraphicItemInterface = this.getGraphicItemHashMap()!.get(graphicItemArray[index]!) as GraphicItemInterface;;
    

    basicArrayList: BasicArrayList = VectorMirrorGenerator.getInstance()!.getInstance(item.getPointsInterface()!.getPoints(), width)!;;
    

    newPoints: Points = new Points();;
    
newPoints!.addPoints(basicArrayList);
    
item.setPointsInterface(newPoints);
    
}

this.repaint();
    
}


                //@Throws(Exception.constructor)
            
    public center(){
new VectorCenterGenerator().transform(this.getGraphicItemHashMap());
    
this.repaint();
    
}


    public setNewTool(){

        try {
            StatusFactory.getInstance()!.setStatus("Tool Selected");
    
this.selectedTool= ToolFactory.getInstance()!.getSelectedToolFactory()!.getInstance(this);
    

    newNode: MutableTreeNode = this.selectedTool!.getTreeNode()!;;
    
this.getGraphicItemHashMap()!.put(newNode, this.selectedTool);
    
this.canvasTreeNode!.add(newNode);
    

                        if(this.getSelectedTool() == 
                                    null
                                )
                        
                                    {
                                    


                            throw new GraphicsException("No Tool Selected", this, "setSelectedTool");
                    

                                    }
                                

                //: 
} catch(e) 
            {
}

}


                //@Throws(Exception.constructor)
            
    public duplicateGraphicItem(GraphicItemInterface graphicItem){

    graphicItemClone: GraphicItemInterface = graphicItem!.duplicate()!;;
    
this.getGraphicItemHashMap()!.put(graphicItemClone!.getTreeNode(), graphicItemClone);
    
this.canvasTreeNode!.add(graphicItemClone!.getTreeNode());
    
}


                //@Throws(Exception.constructor)
            
    public duplicateGraphicItemHashMap(HashMap<any, any> hashMap){

    mutableTreeNodeArray: std::vector<any> = hashMap!.keys().()!;;
    

    size: int32_t = mutableTreeNodeArray!.length
                ;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {

    treeNode: MutableTreeNode = mutableTreeNodeArray[index]! as MutableTreeNode;;
    

    graphicItem: GraphicItemInterface = hashMap!.get(treeNode) as GraphicItemInterface;;
    
this.duplicateGraphicItem(graphicItem);
    
}

}


    public HashMap<any, any> getGraphicItemHashMap(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.graphicItemHashMap;
    
}


    public int32_t getXPixelsPerWorkAreaPixel(){

    x: int32_t = this.getGrid()!.grid.getX() *(this.getWidth() -10) /this.getCanvasDimension()!.getWidth();;
    

                        if(this.getGrid()!.getZoom() == 1)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return 1;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return x;
    

                        }
                            
}


    public int32_t getYPixelsPerWorkAreaPixel(){

    y: int32_t = this.getGrid()!.grid.getY() *(this.getHeight() -10) /this.getCanvasDimension()!.getHeight();;
    

                        if(this.getGrid()!.getZoom() == 1)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return 1;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return y;
    

                        }
                            
}


    public GraphicItemInterface getSelectedTool(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.selectedTool;
    
}


    public drawItems(Graphics graphics){

    angleDouble: number = new number(this.angle);;
    

    graphicItemArray: std::vector<any> = this.getGraphicItemHashMap()!.keys().()!;;
    

    size: int32_t = graphicItemArray!.length
                ;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {

    item: GraphicItemInterface = this.getGraphicItemHashMap()!.get(graphicItemArray[index]!) as GraphicItemInterface;;
    
item.paint(graphics, angleDouble, this.getCanvasDimension(), this.getXPixelsPerWorkAreaPixel(), this.getYPixelsPerWorkAreaPixel());
    
}

}


    public drawGrid(Graphics graphics){

    xAdjust: int32_t = (this.getWidth() % this.getXPixelsPerWorkAreaPixel()) /2;;
    

    yAdjust: int32_t = (this.getHeight() % this.getYPixelsPerWorkAreaPixel()) /2;;
    

    xLeft: int32_t = xAdjust;;
    

    yUpper: int32_t = yAdjust;;
    

    xRight: int32_t = this.getWidth() -xAdjust;;
    

    yLower: int32_t = this.getHeight() -yAdjust;;
    
graphics.setColor(CanvasJPanel.gridColor);
    




                        for (
    value: int32_t = yAdjust;value <= this.getHeight() -yAdjust; )
        {
graphics.drawLine(xLeft, value, xRight, value);
    
}





                        for (
    value: int32_t = xAdjust;value <= this.getWidth() -xAdjust; )
        {
graphics.drawLine(value, yUpper, value, yLower);
    
}

}


    public paint(Graphics graphics){

        try {
            
                        if(this.getGrid()!.isChanged)
                        
                                    {
                                    graphics.setColor(CanvasJPanel.backgroundColor);
    
graphics.fillRect(0, 0, getWidth(), getHeight());
    

                        if(this.getGrid()!.getZoom() > 2 && this.getGrid()!.isGridOn && this.getGrid()!.isGridPossible)
                        
                                    {
                                    this.setDefaultGrid();
    
this.drawGrid(graphics);
    

                                    }
                                
this.drawItems(graphics);
    
graphics.drawString(new number(this.getAngle()).toString(), this.getWidth() -75, this.getHeight() -15);
    
this.grid.isChanged= false;
    

                                    }
                                

                //: 
} catch(e) 
            {
}

}


    public repaint(){

                        if(this.grid != 
                                    null
                                )
                        
                                    {
                                    this.grid.isChanged= true;
    

                                    }
                                
super.repaint();
    
}


                //@Throws(Exception.constructor)
            
    public Node toDom(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new CanvasDom(this).toDom();;
    
}


    public changed(){
this.grid.isChanged= true;
    
}


    public mouseClicked(java.awt.event.MouseEvent mouseEvent){
StatusFactory.getInstance()!.setStatusNoLog(MouseStrings.getInstance()!.MOUSE_CLICKED_LABEL +this.logMouseEvent(mouseEvent));
    

                        if(this.getSelectedTool() != 
                                    null
                                 && this.getSelectedTool()!.isActive())
                        
                                    {
                                    
    graphicItem: GraphicItemInterface = this.getSelectedTool()!;;
    
graphicItem!.mouseClicked(mouseEvent, this.getXPixelsPerWorkAreaPixel(), this.getYPixelsPerWorkAreaPixel());
    

                                    }
                                
                        else {
                            this.setNewTool();
    

    graphicItem: GraphicItemInterface = this.getSelectedTool()!;;
    

                        if(graphicItem != 
                                    null
                                )
                        
                                    {
                                    graphicItem!.mouseClicked(mouseEvent, this.getXPixelsPerWorkAreaPixel(), this.getYPixelsPerWorkAreaPixel());
    

                                    }
                                

                        }
                            
this.grid.isChanged= true;
    
this.repaint();
    
this.workAreaJTreeJPanel!.updateTree();
    
this.workAreaJTreeJPanel!.expand();
    
this.workAreaJTreeJPanel!.repaint();
    
}


    public mouseEntered(java.awt.event.MouseEvent mouseEvent){
StatusFactory.getInstance()!.setStatusNoLog(this.logMouseEvent(mouseEvent));
    
}


    public mouseExited(java.awt.event.MouseEvent mouseEvent){
StatusFactory.getInstance()!.setStatusNoLog(this.logMouseEvent(mouseEvent));
    
}


    public mousePressed(java.awt.event.MouseEvent mouseEvent){
StatusFactory.getInstance()!.setStatusNoLog(MouseStrings.getInstance()!.MOUSE_PRESSED_LABEL +this.logMouseEvent(mouseEvent));
    

                        if(this.getSelectedTool() != 
                                    null
                                )
                        
                                    {
                                    
    graphicItem: GraphicItemInterface = this.getSelectedTool()!;;
    
graphicItem!.mousePressed(mouseEvent, this.getXPixelsPerWorkAreaPixel(), this.getYPixelsPerWorkAreaPixel());
    

                                    }
                                
this.requestFocus();
    
this.grid.isChanged= true;
    
this.repaint();
    
}


    public mouseReleased(java.awt.event.MouseEvent mouseEvent){
StatusFactory.getInstance()!.setStatusNoLog(MouseStrings.getInstance()!.MOUSE_RELEASED_LABEL +this.logMouseEvent(mouseEvent));
    

    graphicItem: GraphicItemInterface = this.getSelectedTool()!;;
    

                        if(graphicItem != 
                                    null
                                )
                        
                                    {
                                    graphicItem!.mouseReleased(mouseEvent, this.getXPixelsPerWorkAreaPixel(), this.getYPixelsPerWorkAreaPixel());
    

                                    }
                                
this.requestFocus();
    
this.grid.isChanged= true;
    
this.repaint();
    
}


    public mouseDragged(java.awt.event.MouseEvent mouseEvent){
StatusFactory.getInstance()!.setStatusNoLog(MouseStrings.getInstance()!.MOUSE_DRAGGED_LABEL +this.logMouseEvent(mouseEvent));
    

    graphicItem: GraphicItemInterface = this.getSelectedTool()!;;
    

                        if(graphicItem != 
                                    null
                                )
                        
                                    {
                                    graphicItem!.mouseDragged(mouseEvent, this.getXPixelsPerWorkAreaPixel(), this.getYPixelsPerWorkAreaPixel());
    

                                    }
                                
this.requestFocus();
    
this.grid.isChanged= true;
    
this.repaint();
    
}


    public mouseMoved(java.awt.event.MouseEvent mouseEvent){
StatusFactory.getInstance()!.setStatusNoLog(MouseStrings.getInstance()!.MOUSE_MOVED_LABEL +this.logMouseEvent(mouseEvent));
    

                        if(this.getSelectedTool() != 
                                    null
                                 && this.getSelectedTool()!.isActive())
                        
                                    {
                                    
    graphicItem: GraphicItemInterface = this.getSelectedTool()!;;
    
graphicItem!.mouseMoved(mouseEvent, this.getXPixelsPerWorkAreaPixel(), this.getYPixelsPerWorkAreaPixel());
    

                                    }
                                
this.requestFocus();
    
this.grid.isChanged= true;
    
this.repaint();
    
}


    string logMouseEvent(java.awt.event.MouseEvent mouseEvent){

    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append(PositionStrings.getInstance()!.X_LABEL);
    
stringBuffer!.appendint(mouseEvent!.getX() /this.getXPixelsPerWorkAreaPixel());
    
stringBuffer!.append(CommonSeps.getInstance()!.SPACE);
    
stringBuffer!.append(PositionStrings.getInstance()!.Y_LABEL);
    
stringBuffer!.appendint(mouseEvent!.getY() /this.getYPixelsPerWorkAreaPixel());
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer!.toString();;
    
}


    public keyPressed(java.awt.event.KeyEvent keyEvent){
StatusFactory.getInstance()!.setStatus("Key Pressed");
    

        try {
            
    graphicItemArray: std::vector<any> = this.graphicItemHashMap!.keys().()!;;
    

    size: int32_t = graphicItemArray!.length
                ;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {

    graphicItemInterface: GraphicItemInterface = this.graphicItemHashMap!.get(graphicItemArray[index]!) as GraphicItemInterface;;
    

    keyCode: int32_t = keyEvent!.getKeyCode()!;;
    

                        if(graphicItemInterface!.isActive())
                        
                                    {
                                    
                        if(keyCode == keyEvent!.VK_UP)
                        
                                    {
                                    graphicItemInterface!.translate(0,  -1);
    

                                    }
                                
                             else 
                        if(keyCode == keyEvent!.VK_DOWN)
                        
                                    {
                                    graphicItemInterface!.translate(0, 1);
    

                                    }
                                
                             else 
                        if(keyCode == keyEvent!.VK_LEFT)
                        
                                    {
                                    graphicItemInterface!.translate( -1, 0);
    

                                    }
                                
                             else 
                        if(keyCode == keyEvent!.VK_RIGHT)
                        
                                    {
                                    graphicItemInterface!.translate(1, 0);
    

                                    }
                                

                                    }
                                
}


                //: 
} catch(e) 
            {

    commonStrings: CommonStrings = CommonStrings.getInstance()!;;
    
this.logUtil!.put(commonStrings!.EXCEPTION, this, this.gameInputStrings!.KEY_PRESSED, e);
    
}


                        if(this.getSelectedTool() != 
                                    null
                                 && this.getSelectedTool()!.isActive())
                        
                                    {
                                    StatusFactory.getInstance()!.setStatus("Key Pressed for Tool");
    

    graphicItem: GraphicItemInterface = this.getSelectedTool()!;;
    
graphicItem!.keyPressed(keyEvent);
    

                                    }
                                
                        else {
                            this.setNewTool();
    

                        }
                            
this.grid.isChanged= true;
    
this.repaint();
    
}


    public keyReleased(java.awt.event.KeyEvent keyEvent){
}


    public keyTyped(java.awt.event.KeyEvent keyEvent){
}


    public delete(MyGraphicItemEvent evt){
this.getGraphicItemHashMap()!.remove(evt.getTreeNode());
    
this.workAreaJTreeJPanel!.updateTree();
    
this.workAreaJTreeJPanel!.expand();
    
this.workAreaJTreeJPanel!.repaint();
    
}


    public deselect(MyGraphicItemEvent evt){

    graphicItemInterface: GraphicItemInterface = this.getGraphicItemHashMap()!.get(evt.getTreeNode()) as GraphicItemInterface;;
    

                        if(graphicItemInterface != 
                                    null
                                )
                        
                                    {
                                    graphicItemInterface!.setColor(Color.WHITE);
    
graphicItemInterface!.deactivate();
    
this.workAreaJTreeJPanel!.repaint();
    

                                    }
                                
}


    public highlight(MyGraphicItemEvent evt){

    graphicItemInterface: GraphicItemInterface = this.getGraphicItemHashMap()!.get(evt.getTreeNode()) as GraphicItemInterface;;
    

                        if(graphicItemInterface != 
                                    null
                                )
                        
                                    {
                                    graphicItemInterface!.setColor(Color.YELLOW);
    
graphicItemInterface!.activate();
    
this.workAreaJTreeJPanel!.repaint();
    

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    public CanvasJPanel duplicate(){

    newCanvasJPanel: CanvasJPanel = new CanvasJPanel(this.workAreaJTreeJPanel, this.getSize(), this.getCanvasDimension()!.getWidth(), this.getCanvasDimension()!.getHeight());;
    
newCanvasJPanel!.setGrid(this.getGrid()!.getGrid());
    
newCanvasJPanel!.setAngle(this.getAngle());
    
newCanvasJPanel!.duplicateGraphicItemHashMap(this.getGraphicItemHashMap());
    
this.workAreaJTreeJPanel!.updateTree();
    
this.workAreaJTreeJPanel!.expand();
    
this.workAreaJTreeJPanel!.repaint();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return newCanvasJPanel;
    
}


                //@Throws(Exception.constructor)
            
    public duplicate(MyGraphicItemEvent event){

    treeNode: MutableTreeNode = event.getTreeNode()!;;
    

    graphicItem: GraphicItemInterface = this.getGraphicItemHashMap()!.get(treeNode) as GraphicItemInterface;;
    

                        if(graphicItem != 
                                    null
                                )
                        
                                    {
                                    this.duplicateGraphicItem(graphicItem);
    
this.workAreaJTreeJPanel!.updateTree();
    
this.workAreaJTreeJPanel!.expand();
    
this.workAreaJTreeJPanel!.repaint();
    

                                    }
                                
}


    public rotate(MyGraphicItemEvent event){

    treeNode: MutableTreeNode = event.getTreeNode()!;;
    

    graphicItem: GraphicItemInterface = this.getGraphicItemHashMap()!.get(treeNode) as GraphicItemInterface;;
    

                        if(graphicItem != 
                                    null
                                )
                        
                                    {
                                    graphicItem!.addAngle(event.getAngle());
    

                                    }
                                
}


    public IntegerDimension getCanvasDimension(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.canvasDimension;
    
}


    public setCanvasDimension(IntegerDimension canvasDimension){
this.canvasDimension= canvasDimension;
    
}


    public Grid getGrid(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.grid;
    
}


};

            

