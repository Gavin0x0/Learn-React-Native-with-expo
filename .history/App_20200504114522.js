import React from "react";
import { creatStore } from "redux";
import { Provider } from "react-redux";
import HomeScreen from "./screens/HomeScreen";

const initialState = {
  action: "openMenu",
};

const reducer = (state = initialState) => {
  return state;
};

const store = creatStore(reducer);
const App = () => (
  <Provider store={store}>
    <HomeScreen></HomeScreen>
  </Provider>
);

export default App;
