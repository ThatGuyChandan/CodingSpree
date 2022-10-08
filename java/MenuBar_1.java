import javafx.application.Application;
import javafx.scene.Scene;
import javafx.scene.control.Button;
import javafx.scene.layout.*;
import javafx.event.ActionEvent;
import javafx.event.EventHandler;
import javafx.scene.control.*;
import javafx.stage.Stage;
import javafx.scene.control.Alert.AlertType;
import java.time.LocalDate;
public class MenuBar_1 extends Application {
  
    public void start(Stage s){

        s.setTitle("creating MenuBar");

        Menu m = new Menu("Menu");
  
        MenuItem m1 = new MenuItem("menu item 1");
        MenuItem m2 = new MenuItem("menu item 2");
        MenuItem m3 = new MenuItem("menu item 3");

        m.getItems().add(m1);
        m.getItems().add(m2);
        m.getItems().add(m3);
  
        MenuBar mb = new MenuBar();
  
        mb.getMenus().add(m);
  
        VBox vb = new VBox(mb);
  
        Scene sc = new Scene(vb, 500, 300);
  
        s.setScene(sc);
  
        s.show();
    }
    public static void main(String args[]){
        launch(args);
    }
}