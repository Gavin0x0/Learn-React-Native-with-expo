import React from "react";
import styled from "styled-components";
import { Animated } from "react-native";
import { Ionicons } from "@expo/vector-icons";
class Menu extends React.Component {
  state = {
    top: new Animated.Value(900),
  };

  componentDidMount() {
    Animated.spring(this.state.top, { toValue: 0 }).start();
  }
  render() {
    return (
      <AnimatedContainer style={{ top: this.state.top }}>
        <Cover></Cover>
        <CloseView>
          <Ionicons
            name='md-close'
            size={32}
            color='#3c4560'
            style={{ position: "absolute", right: 20, top: 5 }}
          />
        </CloseView>
        <Content></Content>
      </AnimatedContainer>
    );
  }
}

export default Menu;

const Container = styled.View`
  position: absolute;
  background: white;
  width: 100%;
  height: 100%;
  z-index: 100;
`;

const Cover = styled.View`
  height: 142px;
  background: black;
`;

const Content = styled.View`
  height: 900px;
  background: #f0f3f5;
`;

const CloseView = styled.View``;

const AnimatedContainer = Animated.createAnimatedComponent(Container);
