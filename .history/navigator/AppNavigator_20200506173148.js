import { createStackNavigator } from "@react-navigation/stack";
import HomeScreen from "../screens/HomeScreen";

const AppNavigator = createStackNavigator({
  Home: HomeScreen,
});

export default createStackNavigator(AppNavigator);
