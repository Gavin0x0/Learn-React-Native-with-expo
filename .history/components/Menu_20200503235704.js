import React from "react";
import styled from "styled-components";
import { Animated, TouchableOpacity, Dimensions } from "react-native";
import { Ionicons } from "@expo/vector-icons";

const screenHeight = Dimensions.get("screen").height;

class Menu extends React.Component {
  state = {
    top: new Animated.Value(screenHeight),
  };

  componentDidMount() {
    Animated.spring(this.state.top, { toValue: 0 }).start();
  }

  toggleMenu = () => {
    Animated.spring(this.state.top, {
      toValue: screenHeight,
    }).start();
  };

  render() {
    return (
      <AnimatedContainer style={{ top: this.state.top }}>
        <Cover>
          <Image source={require("../assets/background1.jpg")} />
          <Title>Levi_尾尾</Title>
          <Subtitle>Designer at design & code</Subtitle>
        </Cover>
        <TouchableOpacity
          onPress={this.toggleMenu}
          style={{
            position: "absolute",
            top: 120,
            left: "50%",
            marginLeft: -22,
            zIndex: 1,
          }}
        >
          <CloseView>
            <Ionicons
              name='md-close'
              size={30}
              color='#546bfb'
              style={{ position: "absolute" }}
            />
          </CloseView>
        </TouchableOpacity>
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
  justify-content: center;
  align-items: center;
`;
const Image = styled.Image`
  position: absolute;
  width: 100%;
  height: 100%;
`;
const Title = styled.Text``;
const Subtitle = styled.Text``;
const Content = styled.View`
  height: ${screenHeight};
  background: #f0f3f5;
`;

const CloseView = styled.View`
  width: 44px;
  height: 44px;
  border-radius: 22px;
  background: white;
  align-items: center;
  justify-content: center;
`;

const AnimatedContainer = Animated.createAnimatedComponent(Container);
