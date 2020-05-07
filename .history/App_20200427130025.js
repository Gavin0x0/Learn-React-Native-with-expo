import "react-native-gesture-handler";
import * as React from "react";
import { View, Text, StyleSheet, Button } from "react-native";
import { NavigationContainer } from "@react-navigation/native";
import { createStackNavigator } from "@react-navigation/stack";

const Stack = createStackNavigator();

const HomeScreen = ({ navigation }) => (
  <View style={styles.center}>
    <Text>Home Screen</Text>
    <Button
      title='Go to Details'
      onPress={() => navigation.navigate("Details")}
    />
  </View>
);

const DetailsScreen = ({ navigation }) => (
  <View style={styles.center}>
    <Text>Details Screen</Text>
    <Button title='Go to Details again' onPress={() => navigation.push("Details")} />
    <Button title='Go back' onPress={() => navigation.goBack()} />
    <Button title='Go Home' onPress={() => navigation.popToTop()} />
  </View>
);

export default function App(props) {
  return (
    <View style={styles.container}>
      <NavigationContainer>
        <Stack.Navigator>
          <Stack.Screen name='Home' component={HomeScreen} />
          <Stack.Screen name='Details' component={DetailsScreen} />
        </Stack.Navigator>
      </NavigationContainer>
    </View>
  );
}

const styles = StyleSheet.create({
  container: {
    flex: 1,
    backgroundColor: "#fff",
  },
  center: {
    flex: 1,
    backgroundColor: "#fff",
    alignItems: "center",
    justifyContent: "center",
  },
});
